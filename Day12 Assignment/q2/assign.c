#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include<sys/un.h>
#include<stdlib.h>


#define SOCK_PATH		"/tmp/desd_sock"


int main() {
	int serv_fd, cli_fd, ret, num1 , num2 , result;
	struct sockaddr_un serv_addr, cli_addr;
	socklen_t socklen;

	
	serv_fd = socket(AF_UNIX, SOCK_STREAM, 0);
	if(serv_fd < 0) {
		perror("socket() failed");
		_exit(1);
	}


	serv_addr.sun_family = AF_UNIX;
	strcpy(serv_addr.sun_path , SOCK_PATH);
	ret = bind(serv_fd, (struct sockaddr*) &serv_addr, sizeof(serv_addr));
	if(ret < 0) {
		perror("bind() failed");
		_exit(2);
	}

	listen(serv_fd, 5);

	while(1) {
	    socklen = sizeof(cli_addr);
		cli_fd = accept(serv_fd,  (struct sockaddr*) &cli_addr, &socklen);

		if(cli_fd < 0)
		{

		perror("accept() failed");
		_exit(1);
		}


		read(cli_fd, &num1, sizeof(int));
		read(cli_fd, &num2, sizeof(int));
		result = num1 + num2;
		write(cli_fd, &result, sizeof(int));
		close(cli_fd);


	}


	
	return 0;
}

