#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

void main()
{
   struct node* head = 0,*last,*new_node,*temp;

    int no,i,count=0;

	printf("\nEnter no of elements you want to enter in a list : \n");
	scanf("%d",&no);

    for(i=1;i<=no;i++)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        
        printf("\tEnter %d element : ",i);
        scanf("%d",&new_node -> data);

        if(head == 0)
        {
            head = new_node;
            head -> next = NULL;
            head -> prev = NULL;
            last=head;

        }
        else
        {
            new_node -> next =0;
            new_node -> prev =last;
            last -> next =new_node;
            last=new_node;
        }

    }


    printf("\nElements of linked list in forward direction are: \n");
    
    temp = head;
    while(temp != NULL)
    {
        printf("\t%d", temp -> data);
        temp = temp -> next;
        count+=1;
    }

    printf("\tNULL\n");

      printf("\nElements of linked list in backward direction are: \n");
    
    
    while(last != NULL)
    {
        printf("\t%d", last -> data);
        last = last -> prev;
    }

    printf("\tNULL\n");

    printf("\n\nTotal elements of linked list are : %d\n",count);
    

}