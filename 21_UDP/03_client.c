#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/select.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int max(int a, int b)

{

    if (a > b)

        return a;

    else

        return b;
}

int main()

{

    int fd, sockfd;

    sockfd = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);

    fd = 0;

    struct sockaddr_in serveraddr, clientaddr;

    serveraddr.sin_family = AF_INET;

    serveraddr.sin_port = htons(5555);

    inet_aton("127.0.0.1", &serveraddr.sin_addr.s_addr);

    fd_set reset;

    socklen_t len;

    int maxfd = max(fd, sockfd) + 1;

    for (;;)

    {

        FD_ZERO(&reset);

        FD_SET(fd, &reset);

        FD_SET(sockfd, &reset);

        select(maxfd, &reset, 0, 0, 0);

        if (FD_ISSET(fd, &reset))

        {

            char sendbuf[100] = {0};

            int n = read(fd, sendbuf, 100);

            sendto(sockfd, sendbuf, n, MSG_CONFIRM, &serveraddr, sizeof(serveraddr));
        }

        if (FD_ISSET(sockfd, &reset))

        {

            char recvbuf[100] = {0};

            int n = recvfrom(sockfd, recvbuf, 100, MSG_WAITALL, &serveraddr, &len);

            write(1, recvbuf, n);
        }
    }
}
