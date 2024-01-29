#include <stdio.h>
#define n 5
int main()

{

int i ,j;
for (i=0;i<n;i++)
{
    for (j=i;j<n;j++)
    {
      char a='A';
      printf("%c", a++);
    }
    
    printf("\n");
}
return 0 ;
}
