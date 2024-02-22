#include <stdio.h>
#define MAX_LIMIT 20
int main()
{
   char str[MAX_LIMIT];
   
   printf("Enter your name here (Max 20 char limits) : ");
   
   fgets(str, MAX_LIMIT, stdin);
   
   printf("You entered : %s", str);
 
   return 0;
}