//*Example 2: Read from a text file*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr; // 

   if ((fptr = fopen("hello.txt","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

   fscanf(fptr,"%d", &num);

   printf("Value of n=%d", num);
   fclose(fptr); 
  
   return 0;
}