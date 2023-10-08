#include<stdio.h>
#include<stdlib.h>
struct node {
    struct node *le ;
    int data ;
    struct node *ri ;
};

void insert(struct node *ptr)
{
    printf("\nEnter data in the left : ");
    scanf("%d",&ptr->le);
  
    printf("\nEnter data : ");
    scanf("%d",&ptr->data);

    printf("\nEnter data in the right : ");
    scanf("%d",&ptr->ri);
   
}

void display (struct node *ptr)
{

    printf("\n----------------------------------------------------------------\n----------------------------------------------------------------\nEntered datas are:\n");
        
        printf("\nEntered data in the left is :%d\n ", ptr->le);
        printf("\nEntered data is :%d\n ", ptr->data);
        printf("\nEntered data in the right is :%d\n ", ptr->ri);
        
    
}

int main ()
{
    // pointer assingment to the structure node
    struct node *head ;
    struct node *first ;
    struct node *last ;

    // allocation of memory to the pointer of the structure node
    
    head =(struct node *)malloc(sizeof(struct node));
    first =(struct node *)malloc(sizeof(struct node));
    last = (struct node *)malloc(sizeof(struct node));

    //linking structurs
    //linking head with first 

    head -> data ;
    head -> le = first;
    head -> ri = last ;
    
    insert(head);  
    display(head);  
 
 
    

    
}
