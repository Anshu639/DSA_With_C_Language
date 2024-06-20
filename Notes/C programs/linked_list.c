#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

void main() 
{
    struct node* head = 0,*new_node,*temp;

    int choice,count=0;

    while(choice)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        
        printf("Enter data in a linked list : ");
        scanf("%d",&new_node -> data);

        new_node -> next =0;

        if(head == 0)
        {
            head = new_node;
            temp = new_node;
        }
        else
        {
            temp -> next=new_node;
            temp = new_node;
        }

        printf("\nDo you want to enter another element\n \t1: continue \t 0: exit\n ");
        scanf("%d",&choice);
    }

    printf("Elements of linked list are : \n");
    
    temp = head;
    while(temp != 0)
    {
        printf("%d\t", temp -> data);
        temp = temp -> next;
        count+=1;
    }

    printf("Total elements of linked list are : %d\n",count);

}