#include<stdio.h>
#include<stdlib.h>

#define size 5
int queue[size];
int front=-1;
int rear=-1;


void enqueue(int x)
{
    if((rear + 1)%size == front)
        printf("\nOverflow! Cannot insert");

    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else
    {
        rear=(rear+1)%size;
        queue[rear]=x;
    }
}

void dequeue()
{
    if(front==-1 && rear==-1)
        printf("\nUnderflow! Cannot delete");

    else if(front==rear)
    {
        printf("\n%d deleted",queue[front]);
        front=rear-1;
    }
    else
    {
        printf("\n%d deleted",queue[front]);
        front=(front+1) % size;
    }
}

void display()
{
    int i=front;
    if(front==-1 && rear==-1)
        printf("\nUnderflow! No elements");
    else
    {
        printf("\nQueue elements are : \n");
        while(i != rear)
        {
            printf("%d\t",queue[i]);
            i=(i+1)%size;
        }
        printf("%d\t", queue[i]);
    }
}

void main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    dequeue();
    dequeue();
    enqueue(60);
    enqueue(70);
    display();
    enqueue(100);

}