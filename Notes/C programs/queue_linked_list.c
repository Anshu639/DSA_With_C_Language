#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};
struct node *rear =0;
struct node *front =0;

void enqueue()
{
    struct node *new_node;
    new_node=(struct node *)malloc(sizeof(struct node));

    printf("\nEnter data : ");
    scanf("%d",&new_node->data);
    new_node -> next = NULL;    

    if(front== NULL && rear== NULL)
    {
        front=rear=new_node;
    }
    else
    {
        rear->next=new_node;
        rear=new_node;
    }
}


void dequeue()
{
    struct node *del=front;
    if(front == NULL)
    {
        printf("\nUnderflow! Cannot delete :(");
    }
    else
    {
        printf("\n%d deleted.", front->data);
        front = front->next;
        free(del);

   
    }
}

void peek()
{
     if(front ==0 && rear == 0)
    {
        printf("\nUnderflow! No elements  :(");
    }
    else
    {
         printf("\n The top most element of queue is : %d",front -> data);
    }
}

void show()
{
    if(front ==0 && rear == 0)
    {
        printf("\nUnderflow! No elements  :(");
    }
    else
    {
        struct node *temp=front;
        printf("The Queue is : \n");
        while(temp !=NULL)
        {
            printf("\t%d",temp -> data);
            temp= temp-> next;
        }
    }
}


void main()
{
    int ch;

    while(ch !=7)
    {
        printf("\n\nSelect the operation : ");
        printf("\n\t1. Enqueue\n\t2. Dequeue\n\t3. Peek\n\t4. Show\n\t5. Exit\n");
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
                exit(0);
                break;

            default:
                printf("you entered wrong choice");
        }
    }

}
