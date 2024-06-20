#include <stdio.h>
#include <stdlib.h>
#define SIZE 4

int front = -1, end = -1;
int Array[SIZE];

void enqueue();
void dequeue();
void show();

int main()
{
    while (1)
    {
        int c;
        printf("What operation do you want to perform:\n 1).Insert \n 2).Delete \n 3).Show \n 4).Exit\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid Choice\n");
        }
    }
}

void enqueue()
{
    if ((end + 1) % SIZE == front)
    {
        printf("Overflow\n");
    }
    else
    {
        int new;
        printf("Enter The value to insert into the queue:\n");
        scanf("%d", &new);
        if (front == -1)
        {
            front = 0;
        }
        end = (end + 1) % SIZE;
        Array[end] = new;
    }
}

void dequeue()
{
    if (front == -1)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("The element deleted from the queue: %d\n", Array[front]);
        if (front == end)
        {
            front = end = -1;
        }
        else
        {
            front = (front + 1) % SIZE;
        }
    }
}

void show()
{
    if (front == -1)
    {
        printf("Empty queue\n");
    }
    else
    {
        int i = front;
        while (i != end)
        {
            printf("Element is: %d\n", Array[i]);
            i = (i + 1) % SIZE;
        }
        printf("Element is: %d\n", Array[end]);
    }
}