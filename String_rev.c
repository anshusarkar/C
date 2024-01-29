#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define m 5
int main()
{
 int i , j ,n  ;
 char str[20];
 char* rev = (char*)malloc(sizeof(char));
 printf("Enter a string : ");
 for(i=0;i<m;i++)
 {
  scanf("%c" , &str[i]);
 }
 
 n=strlen(str);
 
 for(i=m;i>=0;i--)
 {
  printf("%c" , str[i]);
  rev[i]=str[i];
  
 }
 printf("\n");
 for(i=m;i>=0;i--)
 {
    printf("%c" , rev[i]);
 }
 
}
