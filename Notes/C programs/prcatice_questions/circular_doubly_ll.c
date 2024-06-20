#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

void insert(struct node *head,int data)
{
    struct node *last,*new_node,*temp;
    new_node -> data = data;

    if(head == 0)
        {
            new_node -> next = new_node;
            new_node -> prev = new_node;
            head = new_node;
        }
        else
        {
            new_node -> next = head;
            new_node -> prev = head -> prev;
            head -> prev -> next =new_node;
            head ->prev = new_node;
        }

}

void display(struct node *head)
{
    if (head == NULL) 
    {
        printf("The list is empty.\n");
    }

    struct node* temp = head;
    do 
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}


void main()
{
    struct node* head = 0;

    insert(head,10);
    insert(head,20);
    insert(head,30);
    insert(head,40);
    insert(head,50);

    display(head);
}