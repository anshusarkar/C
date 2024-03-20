#include<stdio.h>
enum men {x,y,z,a,b,c};
enum month {jan=0,feb=5,march=6,april=7,may=8};
int main()
{
    enum men person ;
    person = x ;
    printf("%d\n",x); 

    int i ;

    for( i =jan ; i<may ; i++)
     printf("%d \t",i);
    
    printf("\n%d,%d,%d,%d,%d",jan,feb,march,april,may);
    return  0 ;

    
}