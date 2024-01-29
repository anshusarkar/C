#include<stdio.h>
#include<stdlib.h>
int main()
{
    int  i , j ,  r , c ;

    printf("Enter the amount for row : ");
    scanf("%d" , &r );

    printf("Enter the amount of coloum : ");
    scanf("%d" , &c);

    int n = r*c ;

    /*Dynamically alocating memory for array*/
    /*Just by incressing the size of it by multipling rows and coloum */

    int*a = (int*)malloc(n* sizeof(int));

    for(i=0;i<n;i++)
    {
        
        printf("Enter the a[%d][%d] :" , i+1 , i+1);
        scanf("%d" , &a[i] );
        
    }

    /*Printing the values in the array as a 2d array*/
    printf("The elements in the 2d array is :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t" , a[i+j] ); /*but in phython it used to be a[i][j]*/
        }

        printf("\n");

    }
    free(a);
    return 0 ;
}

