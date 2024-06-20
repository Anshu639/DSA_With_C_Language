#include<stdio.h>
#include<stdlib.h>

const int size =10;
int queue_arr[10];
int front=-1;
int rear=-1;

void isfull()
{
    if(rear == size-1)
    {
        printf("\n The queue is full");
    }
}

void isempty()
{
    if(front ==-1 ||  front > rear)
    {
        printf("\n The queue is empty");
    }
}

void enqueue()
{
    if(rear == size-1)
    {
        printf("Overflow ! Cannot insert :(");
    }

    else
    {
       if(front==-1 && rear ==-1)
       {
            front+=1;
            rear+=1;
            int no;
            printf("\nEnter the element to be inserted : ");
            scanf("%d",&no);
            queue_arr[rear] = no;
            printf("Element inserted");
       }
       else
       {
            rear+=1;
            int no;
            printf("\nEnter the element to be inserted : ");
            scanf("%d",&no);
            queue_arr[rear] = no;
            printf("Element inserted");
       }
    }
}

void dequeue()
{
    if(front==-1 || front>rear)
    {
         printf("\nUnderflow! Cannot delete :(");
    }
    else
    {
        printf("\nelementh %d deleted.",queue_arr[front]);
        front+=1;
    }
}

void peek()
{
    printf("\n The top most element of queue is : %d",queue_arr[front]);
}

void show()
{
    if(front ==-1 || front>rear)
    {
         printf("\nUnderflow! No elements  :(");
    }
    else
    {
        int i;
        printf("\nElements of queue are :\n");

        for(i=front;i<=rear;i++)
        {
            printf("\t%d",queue_arr[i]);
        }
    }
}

void main()
{
    int ch;

    while(1)
    {
        printf("\n\nSelect the operation : ");
        printf("\n\t1.Enqueue --- to insert\n\t2.Dequeue --- to delete\n\t3.Peek\n\t4.Show --- to display elements\n\t5.isfull()\n\t6.isempty()\n\t7.Exit\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                peek();
                break;

            case 4:
                show();
                break;

            case 5:
                isfull();
                break;

             case 6:
                isempty();
                break;

             case 7:
                exit(0);
                break;

            default:
                printf("you entered wrong choice");
        }
    }

}