
#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <cstring>
#include <arpa/inet.h>
#include <boost/thread.hpp>
#include <stdio.h>

using namespace std;
void Send (int desc)
{

    char info[100];

    while (1)
    {

      char sendbuf[100]={0};
      int n= read(0,sendbuf,100);
      write(desc,sendbuf,n);

      n=read(desc,info,100);
      char buffer [150];
      sprintf (buffer, "From Server - %s", info);
      write(1,buffer,strlen (buffer));
    }
}

int main()
{

    struct sockaddr_in client_tcp;
    int client_desc = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

    if (client_desc < 0)
    {
        cout << "Client - Socket connection failed" << endl;
        return 0;
    }

    memset(&client_tcp, 0, sizeof(client_tcp));

    client_tcp.sin_family = AF_INET;
    client_tcp.sin_port = htons(3600);
    client_tcp.sin_addr.s_addr = inet_addr("127.0.0.1");

    if (connect(client_desc, (struct sockaddr*) &client_tcp, sizeof (client_tcp)))
    {
        cout << "client- connection error" << endl;
        return 0;
    }

    boost::thread th_client (Send, client_desc);
    th_client.join();

    return 0;
}
using namespace boost;
