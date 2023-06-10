#include<stdio.h>
#define n 5 
int arr[n] ;
int insert()
{
    for(int i=0 ; i<n ; i++)
    {
        printf("Enter an element: ");
        scanf("%d",&arr[i]);
    }
    return n ;
        
}
int display(){
  
    printf("\n\n[\t");
    for(int i=n-1 ; i>=0 ; i--)
    {
      printf("%d\t",arr[i]);
    }
}
int delete(){
    int i ;
    int j ;
    printf("Enter the initial index of the elemnet to delete\n(Index starts from Zero): ");
    scanf("%d",&i);
    printf("Enter the the last posiotion of Element to delete more than one \n\nEnter the initail index again to delete one  : ");
    scanf("%d",&j);
    if(arr[0]!=0)
    {
    if((i=0)&&(j=0))
        {
            arr[0]=0;        
        }
    else if (i=j)
    {
      arr[i]=0;
    }
    else 
        {
        for(int x = i ; x <= j ; x++)
            {
            arr[x] = 0;
            }
        }
    }
    else
    {
        printf("Nothing is inserted ....\nNothing to delete\n");
    }
}

void main()
{
 int choice ;
 while(choice!=4)
  {
    
    if(choice!=4)
    {
    printf("Enter 1 for insertion of an element,\nEnter 2 for display of all elements,\nEnter 3 to perfrom deletation.\nEnter 4 to exit\n");
    printf("Enter a choice : ");
    scanf("%d",&choice);
    if(choice>4)
    {   
        printf("\n\nInvalid choice...\n\n");
    }
    if (choice==1)
      {
        insert();
      }
    else if (choice==2)
      {
        if (arr[n]=0)
          {
            printf("Array is empty!\n");
            printf("Array is in uendeflow");
          }
        else
            {
             display();
             printf("]\n\n");
            }
        
      }  
    else if (choice ==3)
      {
        printf("Perfroming deletation\n\n");
        delete();
        printf("Done...\n\n");
      }
    }
     printf("\n\nExiting.....\n\n");
    
  }


}
