#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<sys/select.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int max(int a,int b)
{
    if(a>b)
         return a;
    else
         return b;
}


int main()
{
      int fd,listenfd;
      fd=0;
      listenfd=socket(AF_INET,SOCK_DGRAM,IPPROTO_UDP);

      struct sockaddr_in serveraddr,clientaddr;
      serveraddr.sin_family=AF_INET;
      serveraddr.sin_port=htons(5555);
      inet_aton("192.168.66.91",&serveraddr.sin_addr.s_addr);

      bind(listenfd,&serveraddr,sizeof(serveraddr));

      socklen_t len;


     fd_set reset;
     int maxfd=max(fd,listenfd)+1;

     for(;;)
     {
		//Setting file descriptor to zero
		// fd is for sending data to client
		// listenfd is for receiving data from the client
             FD_ZERO(&reset);
             FD_SET(fd,&reset);
             FD_SET(listenfd,&reset);
		//
             select(maxfd,&reset,0,0,0);
             //Reason to have two file descriptor is that the flow gets blocked 
	     //Thats y we have 2 seperate fd for msg from the client to server & server to client 
	     if(FD_ISSET(listenfd,&reset))
             {
                   char recvbuf[100]={0};
                   int n=recvfrom(listenfd,recvbuf,100,MSG_WAITALL,&clientaddr,&len);
                   write(1,recvbuf,n);
             }
             if(FD_ISSET(fd,&reset))
             {//How is data being read without scanf?
                    char sendbuf[100]={0};
                    int n=read(fd,sendbuf,100);
                    sendto(listenfd,sendbuf,n,MSG_CONFIRM,&clientaddr,sizeof(clientaddr));
             }

     }
}
