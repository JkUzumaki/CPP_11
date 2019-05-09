
#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string>
#include <unistd.h>
#include <cstring>
#include <boost/thread.hpp>

using namespace std;

void Receive (int ifaccept)
{
  char info[100];

  while (1)
  {

    char recvbuf[100]={0};
    int n=read(ifaccept,recvbuf,100);
    write(1,recvbuf,n);

    strcpy(info, "Positive Ack!\n");
    write(ifaccept,info,strlen (info) +1);

  }

}

int main ()
{


  //* internet socket
    socklen_t len;
    struct sockaddr_in tcpsocket;

    int sock_tcp = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

    memset(&tcpsocket, 0, sizeof(tcpsocket));

    tcpsocket.sin_family = AF_INET;
    tcpsocket.sin_addr.s_addr = htonl(INADDR_ANY);
    tcpsocket.sin_port = htons(3600);

    if (bind(sock_tcp, (struct sockaddr*) &tcpsocket,sizeof (tcpsocket)) < 0)
    {
      cout << "Bind error" << endl;
      return 0;
    }

    if (listen(sock_tcp, 3) < 0)
    {
      cout << "listen error" << endl;
      return 0;
    }

    len = sizeof (tcpsocket);
    int iaccept = accept(sock_tcp, (struct sockaddr*) & tcpsocket,&len);
    if (iaccept < 0)
    {
      cout << iaccept << "- Accept error" << endl;
      return 0;
    }

    boost::thread th_server (Receive, iaccept);
    th_server.join();

    return 0;
}

using namespace boost;
