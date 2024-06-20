#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};



void main() 
{
    struct node *head = 0,*new_node,*temp,*p,*q;

    int no,i,count=0,ch,pos;

	printf("\nEnter no of elements you want to enter in a list : \n");
	scanf("%d",&no);

    for(i=1;i<=no;i++)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        
        printf("\nEnter %d element : \n",i);
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

    }

    printf("\nElements of linked list are : \n");
    
    temp = head;
    while(temp != 0)
    {
        printf("%d\t", temp -> data);
        temp = temp -> next;
        count+=1;
    }

    printf("\nTotal elements of linked list are : %d\n",count);

    printf("\n1. Deleting the first node\n2. Deleting the last node\n3. Deleting the a node in between\n\t");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:

            p = head;
            head=p -> next;
            free(p);
            printf("Deletion successful");
            printf("Elements of linked list are : \n");
    
            temp = head;
            while(temp != 0)
            {
                printf("%d\t", temp -> data);
                temp = temp -> next;
                count+=1;
            }
            break;

        case 2:
            //p=head;
            q=head;
            while(q -> next != NULL)
            {
                p = q ;
                q = q -> next;
            }
                p -> next =NULL;
                free(q);
                
                printf("Deletion successful");
                printf("\nElements of linked list are : \n");
        
                temp = head;
                while(temp != 0)
                {
                    printf("%d\t", temp -> data);
                    temp = temp -> next;
                    count+=1;
                }
            
            break;

        case 3:
            printf("enter the element : ");
            scanf("%d",&pos);

            q=head;
            while(q -> data != pos)
            {
                p=q;
                q=q -> next;
            }
            p -> next = q -> next;
            free(q);
             printf("Deletion successful");
            printf("\nElements of linked list are : \n");
    
            temp = head;
            while(temp != 0)
            {
                printf("%d\t", temp -> data);
                temp = temp -> next;
                count+=1;
            }
            break;

        default:
            printf("You entered wrong choice...");
            break;
    }

}