#include <stdio.h>
int a[100];
int insert()
{
    int n;
    printf("Enter the number of elements to be inserted: ");
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++)
    {
        printf("Enter an element: ");
        scanf("%d",&a[i]);
    }
        
}
int display()
{
    int n;
    printf("Enter the number of element to be displayed : ");
    scanf("%d", &n);
    printf("Following the order lifo :[\t ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        printf("]");
    }
}
int delete ()
{
    printf("Enter the initaial index of the array (Index starts from Zero) : ");
    int i;
    scanf("%d", &i);
    printf("Enter the final index of the array or enter the intaial index agin to delete : ");
    int j;
    scanf("%d", &j);
    if (i == j)
    {
        printf("deleteing the value at index %d\n", i);
        a[i] = 0;
    }
    else
    {
        for (int x = i; x < j; j++)
        {
            a[x] = 0;
        }
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
        if (a[0]==0)
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