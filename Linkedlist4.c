#include<stdio.h>
#include<stdlib.h>
struct node {
    int data ;
    struct node *next ;
};

void insertion(struct node *ptr)
{
    while(ptr !=NULL)
    {
        printf("Enter data : ");
        scanf("%d",&ptr->data);
        ptr=ptr->next;
    }

}
void display(struct node *ptr)
{
    while(ptr != NULL)
    {
        printf("%d",ptr->data);
        ptr=ptr->next;
    }

}
int main ()
{
    struct node *head ;
    struct node *second;
    struct node *third ;
    struct node *fourth;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    
    head->data;
    head->next = second ;

    second->data;
    second->next = third ;

    third->next;
    third->next = fourth ;

    fourth->next;
    fourth->next =NULL ;

    insertion(head);
    display(head);



}