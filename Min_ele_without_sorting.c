/*serching the minimum element in the array using dym*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i , j , n , min ;
    printf("Enter the ammount of memeory to be assinged here : ");
    scanf("%d" , &n);

    int*ptr=(int*)malloc(n*sizeof(int));
    
    if(ptr==NULL)
    {
        printf("Memory isn't assinged %d times than before \n" , n );
    }
    else
    {
        printf("Memory is assinged %d times than before \n" , n );
    }

   
    for(i=0;i<n;i++)
    {
        printf("\nEnter the value of %dno. element here :" , i+1);
        scanf("%d" , &ptr[i] );
    }

    printf("\n\nThe elements in the array are :\n\n[\t");

    for(i=0;i<n;i++)
    {
        printf("%d\t" , ptr[i]);
    }
   
    printf("]");
    
    min = ptr[0];
    
    
    for(i=0;i<n;i++)//To check the min element a[0] i.e. O get's compaired
    {
        
        if(ptr[i] < min)//to get maximum do(ptr[i]>a[0])
        {
            min=ptr[i];
            
        }
        
    }
   
   printf("\n\nThe minumam element in the array is : %d" , min  );

   free(ptr);
   return 0 ;

}
