#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data ;
    struct node *next ;
};

void insertion(struct node *ptr)
{
    while(ptr != NULL)
    {
        printf("Enter the data : ");
        scanf("%d",&ptr->data);
        ptr=ptr->next;
    }

}
void display(struct node *ptr)
{
    while(ptr != NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;3
        
    }

}
int main()
{
    struct node *head ;
    struct node *first;
    struct node *second;
    struct node * third ;
    struct node * fourth ;
    struct node * fifth ;

    head =(struct node*)malloc(sizeof(struct node));
    first =(struct node*)malloc(sizeof(struct node));
    second =(struct node*)malloc(sizeof(struct node));
    third =(struct node*)malloc(sizeof(struct node));
    fourth =(struct node*)malloc(sizeof(struct node));
    fifth =(struct node*)malloc(sizeof(struct node));

    head->data;
    head->next = first ;

    first->data ;
    first->next = second ;
    
    second->data ;
    second->next = third ;
    
    third->data ;
    third->next = fourth ;

    fourth->data ;
    fourth->next = fifth ;

    fifth->data ;
    fifth->next =NULL ;

    insertion(head);
    display(head);

}