#include<stdio.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<unistd.h>
#include<arpa/inet.h>

// After One time execution of this program the executables genetrated by this program might not work again as 

// the program dosen't stop the program after the execution, to solve this use this command in linux

// ps | grep "s.out" 

// kill "port id"

// Nah forget about it still only work one time at a system // some how runs every time in programizes website 

// Run the server side program at first then in a seperate window run the client_side ....... they would work some how ¯\_(ツ)_/`

int main()
{
int server_sockfd,client_sockfd;
int server_len,client_len;
struct sockaddr_in server_address,client_address;
server_sockfd=socket(AF_INET,SOCK_STREAM,0);
server_address.sin_family=AF_INET;
server_address.sin_port=6666; 
server_address.sin_addr.s_addr=inet_addr("127.0.0.1");
server_len=sizeof(server_address);
bind(server_sockfd,(struct sockaddr *)&server_address,server_len);
listen(server_sockfd,5);
while(1)
{
char ch;
printf("Server waiting\n");
client_len=sizeof(client_address);
client_sockfd=accept(server_sockfd,(struct sockaddr *) &client_address,&client_len);
read(client_sockfd,&ch,1);
printf("Character from client is : %c\n",ch);
ch++;
write(client_sockfd,&ch,1);
}
}