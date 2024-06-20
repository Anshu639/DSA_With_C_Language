#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
int main()
{
    struct node *head = NULL, *temp, *newNode;
    int choice, count = 0;
    while (choice)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data you want to insert :");
        scanf("%d", &newNode->data);
        newNode->prev = NULL;
        newNode->next = NULL;
        if (head == NULL)
        {
            head = temp = newNode;
        }
        else
        {
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        }
        printf("\nDo you want to enter another element\n \t1: continue \t 0: exit\n ");
        scanf("%d", &choice);
    }
    printf("Elements in the linked list are:");
    temp = head;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
        count++;
    }
    printf("\nTotal elements of linked list are : %d", count);

    return 0;
}
