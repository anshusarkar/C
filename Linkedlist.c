//(1)https://youtu.be/TWMCMvfEAv4
//(2)https://youtu.be/BHphhqL9EOE
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void display(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Entered data is : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
void insert(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Enter data  : ");
        scanf("%d", &ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    // Creating pointer at heap
    struct node *head;
    struct node *first;
    struct node *second;

    // Alocating memoery at heap

    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    
    // linking head with first
    head->data ;
    head->next = first;
    // linking first with second
    first->data ;
    first->next = second;
    // linking second with third
    second->data ;
    second->next = NULL;
    
    insert(head);
    display(head);
    return 0;
}