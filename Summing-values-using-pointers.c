#include<stdio.h>
int main ()
{
    int a , b ;
    printf("Enter the value of 1st input : ");
    scanf ("%d" ,&a );
    printf("Enter the value of 1st input : ");
    scanf ("%d" , &b );
    int*p1=&a;
    int*p2=&b;
    printf("%d+%d=%d" ,*p1 ,*p2 ,*p1 + *p2 );
    return 0;
    
}