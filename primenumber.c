#include<stdio.h>
int main ()
{
    int i , num , flag ;
    printf("Enter a value here : ");
    scanf("%d",&i);
    
    if((i==0||i==1))
    {
        printf("%d is not a prime number !",i);
    }


    for (int j = 2; j <= i / 2; ++j)
    {
      if (num % j == 0)
       {
         flag = 1 ;
       }
       else
       {
        flag = 0 ;
       }
    }

    if (flag == 1)
    {
        printf("%d is a prime number !",i);
    }
    else
    {
        printf("%d is not a prime numner !",i);
    }

}