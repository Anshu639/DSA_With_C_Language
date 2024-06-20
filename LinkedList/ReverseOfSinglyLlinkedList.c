#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL, *temp, *newNode;

void display(struct node *head)
{
    int count = 0;
    printf("Elements in the linked list are:\n");
    temp = head;
    while (temp != NULL)
    {
        printf("%d \t", temp->data);
        temp = temp->next;
        count++;
    }
    printf("\nTotal elements in the linked list are: %d\n", count);
}

void reverse()
{
    struct node *prevNode, *nextNode;
    temp = head;
    prevNode = NULL;
    temp = nextNode = head;
    while (temp != NULL)
    {
        nextNode = nextNode->next;
        temp->next = prevNode;
        prevNode = temp;
        temp = nextNode;
    }
    head = prevNode;
    display(head);
}

int main()
{
    int num;
    printf("Enter the number of elements you want to enter in a linkedlist :");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter %d element : ", i);
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        if (head == NULL)
        {
            head = temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }
    printf("Before reversing the linked list is :\n");
    display(head);
    printf("After reversing the linked list is :\n");
    reverse();
    return 0;
}
