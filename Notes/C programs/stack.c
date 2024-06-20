#include<stdio.h>
#include<stdlib.h>

const int size =10;
int stack_arr[10];
int top=-1;

void push()
{
    if(top == size)
    {
        printf("\nOverflow! Cannot insert :(");
    }
    else
    {
        int no;
        printf("\nEnter the element to be inserted : ");
        scanf("%d",&no);

        top ++;
        stack_arr[top]=no;

        printf("Element inserted");
    }
}

void pop()
{
    if(top == -1)
    {
        printf("\nUnderflow! Cannot delete :(");
    }
    else
    {
        printf("\n%d deleted.",stack_arr[top]);
        top--;
    }
}

void show()
{
    if(top ==-1)
    {
         printf("\nUnderflow! No elements  :(");
    }
    else
    {
        int i;
        printf("\nElements of stack are :");

        for(i=top;i>=0;i--)
        {
            printf("\n%d",stack_arr[i]);
        }
    }
}

void peek()
{
    printf("\n The top most element of stack is : %d",stack_arr[top]);
}

void isempty()
{
    if(top == -1)
    {
        printf("\n The stack is empty");
    }
    else 
    {
        printf("\nThe stack is not empty");
        show();
    }
}

void isfull()
{
    if(top == size)
    {
        printf("\n The stack is full");
    }
    else 
    {
        printf("\nThe stack is not full");
        show();
    }
}


void main()
{
    int ch;

    while(1)
    {
        printf("\n\nSelect the operation : ");
        printf("\n\t1.Push --- to insert\n\t2.Pop --- to delete\n\t3.Peek\n\t4.Show --- to display elements\n\t5.isfull()\n\t6.isempty()\n\t7.Exit\n");
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