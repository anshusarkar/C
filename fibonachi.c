#include <stdio.h>

int main()
{
    int a , b ,c ,e ;
    a=0;
    b=1;
    
    
    printf("Enter the value here : ");
    
    scanf("%d" ,&e );
    printf("%d %d " , a , b );
    for(int c=3; c<=e ; c++ )
    
    {   
        c=a+b;
        printf(" %d " , c );
        a=b;
        b=c;
    }
return 0;
}
