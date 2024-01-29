#include <stdio.h>
int main()
{   
    int X , m ;
    m=(X/10);
    printf("Enter the value here : ");
    scanf("%d" , &X );
    switch(m)
    {
    case 10:
    printf("o");
    break;
    
    case 9:
    printf("o");
    break;
    
    case 8:
    printf("e");
    break;
    
    case 7:
    printf("a");
    break;
    
    case 6:
    printf("b");
    break;
    
    case 5:
    printf("c");
    break;
    
    default:
    printf("Wrong");
    }
}


