#include <stdio.h>

#define MAX 50

void insert();
 
void dele();

void display();

int queue[MAX];

int rear = -1;

int front = -1;

int main()

{

    int choice;

    while (1)

    {

        printf("1.Insert element to queue \n");

        printf("2.Delete element from queue \n");

        printf("3.Display all elements of queue \n");

        printf("4.Quit \n");

        printf("Enter your choice : ");

        scanf("%d", &choice);

        switch (choice)

        {

        case 1:

            insert();

            break;

        case 2:

            dele();

            break;

        case 3:

            display();

            break;

        case 4:

            printf("exit");

        default:

            printf("Wrong choice \n");
        }
    }
}

void insert()

{

    int item;

    if (rear == MAX - 1)

        printf("Queue Overflow \n");

    else

    {

        if (front == -1 && rear == -1)

            front = 0;

        printf("Inset the element in queue : ");

        scanf("%d", &item);

        rear = rear + 1;

        queue[rear] = item;
    }
}

void dele()

{

    if (front == -1 || front > rear)

    {

        printf("Queue Underflow \n");

        return;
    }

    else

    {

        printf("Element deleted from queue is : %d\n",
               queue[front]);

        front = front + 1;
    }
}

void display()

{

    int i;

    if (front == -1)

        printf("Queue is empty \n");

    else

    {

        printf("Queue is : \n");

        for (i = front; i <= rear; i++)

            printf("%d ", queue[i]);

        printf("\n");
    }
}