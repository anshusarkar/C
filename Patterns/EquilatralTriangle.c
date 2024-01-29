#include <stdio.h>
int main()
{
    int a , b , c;
    for(a=1;a<=4;a++)
    {
            for (c=3 ; c>=a ; c--)
            {
                printf(" ");
            }
            
            for (b=1 ; b<=a ; b++)
            {
                printf(" *");
            }
        
        printf("\n");
    }
    return 0;
}


