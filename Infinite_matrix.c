#include <stdio.h>
int main ()
{
    int   i , j , k , l  ;
    printf("Enter the number of  row   here : ");
    scanf("%d" , &k );
    printf("Enter the number of column here : ");
    scanf("%d" , &l );
    printf("Enter the values of the %dx%d below ; \n" , k , l );
    int A[k][l];
    for ( i = 1 ; i<=k ; i++ ) 
    {
        for( j = 1 ; j<=l ; j++)
        {
            printf("Enter the value of a[%d][%d] : " , i , j );
            scanf("%d" , &A[i][j] );
        }
        
    }
    for(;;)
    {
    for ( i = 1 ; i<=k ; i++ )
    {
        printf("\n");
        
        for ( j = 1 ; j<=l ; j++ )
        {
            printf("%d\t" , A[i][j] );
        }
        
    }printf("\n\t");
    }
   return 0; 
}




