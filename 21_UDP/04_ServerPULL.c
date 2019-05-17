//Using poll call instead of FD_ZERO etc.
#include<stdio.h>
#include<poll.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<sys/select.h>
#include<netinet/in.h>
#include<arpa/inet.h>

int man(int a, int b)
{
	if(a > b)
		return a;
	else
		return b;
}

int main()
{
	int fd, listenfd;
	fd = 0;
	
	listefd = socket(AF_INET, SOCK_DGRAM, IPPRORO_UDP);
	
	struct sockaddr_in serAddr, cliAddr;
	serAddr.sin_family = AF_INET;
	setAddr.sin_port = htons(1500);
	serAddr.sin_addr.s_addr = htonl(INADDR_ANY);
	bind(listenfd, &serAddr, sizeof(serAddr);

	socklen_t len;

			
}
