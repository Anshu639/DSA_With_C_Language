#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head = NULL, *new_node, *temp;

    int choice, count = 0;

    while (choice)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter data in a linked list : ");
        scanf("%d", &new_node->data);

        new_node->next = NULL;

        if (head == NULL)
        {
            head = new_node;
            temp = new_node;
        }
        else
        {
            temp->next = new_node;
            temp = new_node;
        }
        printf("\nDo you want to enter another element\n \t1: continue \t 0: exit\n ");
        scanf("%d", &choice);
    }
    printf("Elements of linked list are : \n");

    temp = head;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
        count += 1;
    }
    printf("\nTotal elements of linked list are : %d", count);
    return 0;
}