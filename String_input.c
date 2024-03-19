#include <stdio.h>
#define MAX_LIMIT 20 // That's a macro 
int main()
{
   char str[MAX_LIMIT];
   printf("Enter your name (Using method 1 ) : ");
   scanf("%[^\n]%*c", str);                       // That states terminal to take input untill it encounters a new line in that case it's "Enter" 
   printf("%s\n", str);                           // of data type c i.e. chracters

   printf("Enter your name (Using method 2 ) : ");
   fgets(str, MAX_LIMIT, stdin);                  
   printf("%s\n", str);                           

   printf("Enter your name (Using method 3 ) : ");
   scanf("%[^\n]%*c", str);                       // That states terminal to take input untill it encounters a new line in that case it's "Enter" 
   printf("%s\n", str);                           // of data type s i.e.e strings
 
   return 0;
}