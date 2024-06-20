#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int x)
{
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else if ((rear + 1) % SIZE == front)
    {
        printf("Queue is full\n");
    }
    else
    {
        rear = (rear + 1) % SIZE;
        queue[rear] = x;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("The dequeued element is %d\n", queue[front]);
        front = (front + 1) % SIZE;
    }
}

void display()
{
    int i = front;
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        while (i != rear)
        {
            printf("%d ", queue[i]);
            i = (i + 1) % SIZE;
        }
        printf("%d ", queue[rear]);
    }
}

void peek()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Peek value of the Queue is: %d\n", queue[front]);
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
