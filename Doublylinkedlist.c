#include<stdio.h>
#include<stdlib.h>
struct node {
    struct node *le ;
    int data ;
    struct node *ri ;
};

void insert(struct node *ptr)
{
   while (ptr !=NULL)
   {
    printf("Enter data : ");
    scanf("%d",&ptr->data);
   }
}

void display (struct node *ptr)
{
    while (ptr!=NULL)
    {
        printf("Entered data is :%d\n ", ptr->data);
    }
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

    
    

    
}