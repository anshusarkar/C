#include<stdio.h>
int main()
{
    int n ; int temp ;
    printf("Enter the length : ");
    scanf("%d",&n);
    int a[100] ;
    for (int i=0;i<n;i++)
    {
        printf("Enter a value : ");
        scanf("%d" , &a[i]);
    }
    printf("Entered values are : \t");
    for (int i=0;i<n;i++)
    {
       printf("%d\t",a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
            }
        }
    }
    printf("sorted elements are : \t");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0 ;
}