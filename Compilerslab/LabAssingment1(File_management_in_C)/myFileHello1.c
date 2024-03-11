//*Example 1: Write to a text file*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;

 
   fptr = fopen("hello.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

   printf("Enter num (The number would get stored in the hello.txt file ): ");
   scanf("%d",&num);

   fprintf(fptr,"%d",num);
   fclose(fptr);

   return 0;
}