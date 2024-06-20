#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *front = 0;
struct node *rear = 0;
void enqueue(int x)
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = x;
    newNode->link = 0;

    if (front == 0 && rear == 0)
    {
        front = rear = newNode;
    }
    else
    {
        rear->link = newNode;
        rear = newNode;
    }
}

void dequeue()
{
    struct node *temp;
    temp = front;
    if (front == 0 && rear == 0)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("%d deleted from queue \n", temp->data);
        front = front->link;
        free(temp);
    }
}

void display()
{
    struct node *temp;
    if (front == 0 && rear == 0)
    {
        printf("Queue is empty\n");
    }
    else
    {
        temp = front;
        while (temp != 0)
        {
            printf("%d ", temp->data);
            temp = temp->link;
        }
    }
}
void peek()
{
    if (front == 0 && rear == 0)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Peek element: %d\n", front->data);
    }
}
int main()
{
    int choice, x;

    while (1)
    {
        printf("\nPerform operations on the queue:");
        printf("\n1.Enqueue the element\n2.Dequeue the element\n3.Display\n4.Peek\n5.Exit");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the data you want to insert: ");
            scanf("%d", &x);
            enqueue(x);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5:
            exit(0);
        default:
            printf("\nInvalid choice!!\n");
        }
    }

    return 0;
}
