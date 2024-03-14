#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<stdio.h>
#include<arpa/inet.h>
#include<unistd.h>
int main()
{
int sockfd,len,result;
struct sockaddr_in address;
char ch='c';
sockfd=socket(AF_INET,SOCK_STREAM,0);
address.sin_family=AF_INET;
address.sin_port=6666;
address.sin_addr.s_addr=inet_addr("127.0.0.1");
len=sizeof(address);
result=connect(sockfd,(struct sockaddr *)&address,len);
printf("\n Char sent to the server=%c\n",ch);
write(sockfd,&ch,1);
read(sockfd,&ch,1);
printf("\n Char from server is : %c\n",ch);
close(sockfd);
return(0);
}
