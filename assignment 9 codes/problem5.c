#include<stdio.h>
typedef struct student {
    unsigned char name[20];
    unsigned short int age;
    short int batch;  // If you intend to use this later
    unsigned char dept[20];
} std_t;

std_t S, S1;

void file_write(FILE *fp, std_t *s);
void file_read(FILE *fp, std_t *s);

void file_write(FILE *fp, std_t *s) {
    printf("Enter the name: ");
    scanf("%s", s->name);  // Limit input to avoid buffer overflow
    printf("Enter your age: ");
    scanf("%*c%hu", &s->age);
    printf("Enter your department: ");
    scanf("%*c%s", s->dept);  // Limit input to avoid buffer overflow

    fprintf(fp, "%s %hu %s\n", s->name, s->age, s->dept);
}

void file_read(FILE *fp, std_t *s) {
    fseek(fp,0,SEEK_SET);
   while( fscanf(fp, "%9s %hu %9s", s->name, &s->age, s->dept) != EOF){
    printf("Name: %s\n", s->name);
    printf("Age: %hu\n", s->age);
    printf("Department: %s\n", s->dept);
  }
}

int main() {
    FILE *fp = fopen("file2.txt", "a+");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    file_write(fp, &S);
    file_write(fp, &S);
    file_read(fp,&S1);
    
    fclose(fp);
    return 0;
}

