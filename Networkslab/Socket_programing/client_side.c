#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<stdio.h>
#include<arpa/inet.h>
#include<unistd.h>

// After One time execution of this program the executables genetrated by this program might not work again as 

// the program dosen't stop the program after the execution, to solve this use this command in linux

// ps | grep "s.out" 

// kill "port id"

// Nah forget about it still only work one time at a system // some how runs every time in programizes website 

// Run the server side program at first then in a seperate window run the client_side ....... they would work some how ¯\_(ツ)_/`

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
printf("\n Char sent to the server is : %c\n",ch);
write(sockfd,&ch,1);
read(sockfd,&ch,1);
printf("\n Char from server is : %c\n",ch);
close(sockfd);
return(0);
}
