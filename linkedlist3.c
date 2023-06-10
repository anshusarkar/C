#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data ;
    struct node *next ;
} ;
void insert(struct node *ptr)
{
    while(ptr !=NULL)
    {
        printf("Enter the data : ");
        scanf("%d",&ptr->data);
        ptr = ptr->next; 
    }
}
void display(struct node *ptr)
{
    printf("Enterted values are : ");
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next ;
    }
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(1*sizeof(struct node));
    second = (struct node *)malloc(1*sizeof(struct node));
    third = (struct node *)malloc(1*sizeof(struct node));
    fourth = (struct node *)malloc(1*sizeof(struct node));

    head->data;
    head->next = second;

    second->data;
    second->next = third;

    third->data;
    third->next = fourth;

    fourth->data;
    fourth->next = NULL;

    insert(head);
    display(head);
}