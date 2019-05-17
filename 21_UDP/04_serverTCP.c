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
	// FileDescriptor = socket(domain, type, protocol);
	/*
		domain -> AF_INET for ipv4 and AF_INET6 for ipv6
		type   -> It denotes the UDP(SOCK_DGRAM) ot TCP (SOCK_STREAM)
		protocol -> 0 for internet protocol 
	*/
      listenfd=socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);

      struct sockaddr_in serveraddr,clientaddr;
      serveraddr.sin_family=AF_INET;
      serveraddr.sin_port=htons(5555);
      //inet_aton("192.168.66.91",&serveraddr.sin_addr.s_addr);
      serveraddr.sin_addr.s_addr=htonl(INADDR_ANY); 
      // bind call has to be made after the socket call
      // listenfd is socket file descriptor     
      // bind assign the address specified by file descriptor to the socket (assign name to socket)
      bind(listenfd,&serveraddr,sizeof(serveraddr));
      listen(listenfd,5);
      socklen_t len;

      int sockfd=accept(listenfd,&clientaddr,&len);


     fd_set reset;
     int maxfd=max(fd,sockfd)+1;

     for(;;)
     {
		//Setting file descriptor to zero
		// fd is for sending data to client
		// listenfd is for receiving data from the client
             FD_ZERO(&reset);
             FD_SET(fd,&reset);
             FD_SET(sockfd,&reset);
		//used to monitor the file descriptor
             select(maxfd,&reset,0,0,0);
             //Reason to have two file descriptor is that the flow gets blocked 
	     //because of the read call in both client and server
	     if(FD_ISSET(sockfd,&reset))
             {
                   char recvbuf[100]={0};
		   // recvform (sockfd, buffer, size, flag, struct sockaddr, sockaddr len)
                   //int n=recvfrom(listenfd,recvbuf,100,MSG_WAITALL,&clientaddr,&len);
                  int n=read(sockfd,recvbuf,100);
                   write(1,recvbuf,n);
             }
             if(FD_ISSET(fd,&reset))
             {		//How is data being read without scanf?
			/*
			  	Note fd = 0 -> input
				     fd = 1 -> output 
				     fd = 2 -> error
				Here the fd is zero hence its getting the input from the user
				w/o the use of the scanf
			*/
                    char sendbuf[100]={0};
		    // read(fileDescriptor, buffer, size);
		    int n=read(fd,sendbuf,100);
		    // sendto(sockfd, Buffer, size, flag, struct sockaddr, socklen );
                    //sendto(listenfd,sendbuf,n,MSG_CONFIRM,&clientaddr,sizeof(clientaddr));
                    write(sockfd,sendbuf,n);
             }
     }
}
