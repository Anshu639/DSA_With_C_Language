#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

struct node * top=0;

void push()
{
    struct node  * new_node,temp;
    new_node=(struct node *)malloc(sizeof(struct node));

    printf("\nEnter data : ");
    scanf("%d",&new_node->data);

    new_node -> next =top;
    top=new_node;
   
}

void pop()
{
    struct node *del =top;
    if(top == NULL)
    {
        printf("\nUnderflow! Cannot delete :(");
    }
    else
    {
        printf("\n%d deleted.", top->data);
        top = top->next;
        free(del);

   
    }
}

void show()
{
    struct node *temp=top;
    if(top ==NULL)
    {
         printf("\nUnderflow! No elements  :(");
    }
    else
    {
        printf("The stack is : \n");
        while(temp !=NULL)
        {
            printf("\t%d\n",temp -> data);
            temp= temp-> next;
        }
    }
}

void peek()
{
    if(top ==NULL)
    {
         printf("\nUnderflow! No elements  :(");
    }
    else
    {
        printf("\n The top most element of stack is : %d",top -> data);
    }
}


void main()
{
    int ch;

    while(1)
    {
        printf("\n\nSelect the operation : ");
        printf("\n\t1. Push\n\t2. Pop\n\t3. Peek\n\t4. Show\n\t5. Exit\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
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

