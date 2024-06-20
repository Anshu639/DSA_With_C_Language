#include <stdio.h>
#include <stdlib.h>


struct node
{
    int data;
    struct node* next;
};

void display(struct node* head)
{
    
    struct node* temp = head;
    int count=0;

    printf("\nElements of linked list are : \n");
    
    
    while(temp != NULL)
    {
        printf("\t%d", temp -> data);
        temp = temp -> next;
        count+=1;
    }

    printf("\n\nTotal elements of linked list are : %d\n",count);

}

void main() 
{
    struct node* head = 0,*new_node,*temp;
    int count=0;
    int no,i,choice;

	printf("\nEnter no of elements you want to enter in a list : \n");
	scanf("%d",&no);

    for(i=1;i<=no;i++)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        
        printf("\tEnter %d element : ",i);
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
    display(head);  

    printf("\nSelect an operation : \n\t1. Insertion at beginning \n\t2. Insertion at specific position \n\t3. Insertion at end \n\t4. Exit");
    printf("\n\nEnter the Choice \n");
    scanf("%d",&choice);

    switch(choice)
		{
			case 1:
				{
                    
					if(head == NULL)
                    {
                        printf("\nNo memory allocated");
                    }
                    else
                    {
                        new_node=(struct node*)malloc(sizeof(struct node));

                        printf("\nEnter the data you want to insert : ");
                        scanf("%d", &new_node -> data);
                        new_node->next=head;
                        head=new_node;

                        printf("\nData inserted");
                        display(head);                         
                    
                    }                        
					break;
				}	

			case 2:
				{
                    int pos=0,i=1;
                    printf("\nEnter the postion where you want to insert data : ");
                    scanf("%d", &pos);

                    if(head == NULL)
                    {
                        printf("\nNo memory allocated");
                    }
                    else
                    {
                        new_node=(struct node *)malloc(sizeof(struct node));

                        temp = head;
                        while(i < pos)
                        {
                            temp = temp -> next;
                            i++;
                        }

                        printf("\nEnter the data you want to insert : ");
                        scanf("%d", &new_node -> data);
                        new_node -> next = temp -> next;
                        temp -> next = new_node;


                        display(head);
                    }
					break;

				}
			case 3:
			{
					if(head == NULL)
                    {
                        printf("\nNo memory allocated");
                    }
                    else
                    {
                        new_node=(struct node *)malloc(sizeof(struct node));

                        temp = head;
                        
                        printf("\nEnter the data you want to insert : ");
                        scanf("%d", &new_node -> data);

                        while(temp -> next != NULL)
                        {
                            temp = temp -> next;
                        }

                        temp -> next =new_node;
                        new_node -> next =NULL;

                        display(head);
                    }
					break;
			}
			
            default :
                printf("\n\tYou are out ... ");
                break;
		}

}


