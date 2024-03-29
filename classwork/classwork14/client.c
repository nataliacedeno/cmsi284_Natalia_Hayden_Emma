#include <stdio.h>
   #include <sys/socket.h>
   #include <arpa/inet.h>
   #include <unistd.h>
   #include <string.h>

   #define PORT 8080

   int main( int argc, char const *argv[] ) {
       int sock = 0, valread;
       struct sockaddr_in serv_addr;
       char *hello = "Hello from client";
       char buffer[1024] = {0};
       char message[1024];
       if( (sock = socket( AF_INET, SOCK_STREAM, 0 )) < 0 ) {
           printf( "\n Socket creation error \n" );
           return -1;
       }
       serv_addr.sin_family = AF_INET;
       serv_addr.sin_port = htons(PORT);
       if( inet_pton( AF_INET, "127.0.0.1", &serv_addr.sin_addr )<= 0 ) {
           printf( "\nInvalid address or Address not supported \n" );
           return -1;
       }
       if( connect( sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0 ) {
           printf( "\nConnection Failed \n" );
           return -1;
       }
       send( sock, hello, strlen(hello), 0 );
       printf( "   client says: Hello message sent from client\n" );
       valread = read( sock, buffer, 1024 );
       printf( "   client says: server sent: %s\n", buffer );

       scanf("%s", message ); 
       send( sock, message, strlen(message), 0 );

       return 0;
   }
            