#include <stdio.h>
#include <stdlib.h>


struct node
{
    int data;
    struct node *next;
};
void beggining()
{
    struct node  *newnode, *temp,*head;
    newnode=(struct node*)malloc(sizeof(struct node));
    temp=head;
    printf("\nenter value of new node:");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode; 
    
    display(head);
}

void display(struct node* head)
{
    struct node *newnode, *temp;
    int count=0;

    temp=head;
        while(temp!=0)
        {
            printf("%d \t\t",temp->data);
            temp=temp->next;
            count++;
        }
        printf("\n");
        printf("count : %d",count);
}

void main()
{
    struct node *head, *newnode, *temp;
    int choice,i,pos;
    
    // head=(struct node*)malloc(sizeof(struct node));
    head=0;
    while (choice !=0)
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data:");
    scanf("%d",&newnode->data);
    newnode->next=0;
    
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("you want to contine (0,1)?");
        scanf("%d",&choice);
    }

    display(head);
    head=0;
    beggining();

        
}

