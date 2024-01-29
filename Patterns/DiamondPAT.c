#include <stdio.h>
int main()
{
    int a , b , c;
    for(a=1;a<=4;a=a+1)
    {
            for (c=3 ; c>=a ; c=c-1)
            {
                printf(" ");
            }
            
            for (b=1 ; b<=a ; b=b+1)
            {
                printf(" *");
            }
        
        printf("\n");
    
    }

    for(a=3;a>=1;a=a-1)
    {
            for (c=3 ; c>=a ; c=c-1)
            {
                printf(" ");
            }
            
            for (b=1 ; b<=a ; b=b+1)
            {
                printf(" *");
            }
        
        printf("\n");
    }
    return 0;
}
    




