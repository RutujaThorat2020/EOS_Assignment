#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

void error_exit(const char *msg) {
    perror(msg);
    exit(EXIT_FAILURE);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <source file> <destination file>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    const char *src_file = argv[1];
    const char *dest_file = argv[2];

    // Step 1: Open source file in read-only mode
    int src_fd = open(src_file, O_RDONLY);
    if (src_fd == -1) {
        error_exit("Error opening source file");
    }

    // Step 2: Get size of source file
    struct stat src_stat;
    if (fstat(src_fd, &src_stat) == -1) {
        close(src_fd);
        error_exit("Error getting source file size");
    }

    // Check if file is too large
    if (src_stat.st_size > (1 << 30)) { // 1 GB
        close(src_fd);
        fprintf(stderr, "File size exceeds 1 GB\n");
        exit(EXIT_FAILURE);
    }

    // Step 3: Map source file contents to memory
    void *src_map = mmap(NULL, src_stat.st_size, PROT_READ, MAP_PRIVATE, src_fd, 0);
    if (src_map == MAP_FAILED) {
        close(src_fd);
        error_exit("Error mapping source file to memory");
    }

    // Step 4: Create destination file in read-write mode
    int dest_fd = open(dest_file, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    if (dest_fd == -1) {
        munmap(src_map, src_stat.st_size);
        close(src_fd);
        error_exit("Error opening destination file");
    }

    // Step 5: Set size of destination file to match source file
    if (ftruncate(dest_fd, src_stat.st_size) == -1) {
        munmap(src_map, src_stat.st_size);
        close(src_fd);
        close(dest_fd);
        error_exit("Error setting size of destination file");
    }

    // Step 6: Map destination file contents to memory
    void *dest_map = mmap(NULL, src_stat.st_size, PROT_READ | PROT_WRITE, MAP_SHARED, dest_fd, 0);
    if (dest_map == MAP_FAILED) {
        munmap(src_map, src_stat.st_size);
        close(src_fd);
        close(dest_fd);
        error_exit("Error mapping destination file to memory");
    }

    // Step 7: Copy source file to destination file using memcpy
    memcpy(dest_map, src_map, src_stat.st_size);

    // Step 8: Close source and destination files
    munmap(src_map, src_stat.st_size);
    munmap(dest_map, src_stat.st_size);
    close(src_fd);
    close(dest_fd);

    return EXIT_SUCCESS;
}

