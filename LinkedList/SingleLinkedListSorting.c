#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void display(struct node *head)
{
    struct node *temp = head;
    printf("Elements in the linked list are:\n");
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void bubbleSort(struct node *start)
{
    int swapped;
    struct node *ptr;
    struct node *last = NULL;

    if (start == NULL)
        return;

    do
    {
        swapped = 0;
        ptr = start;

        while (ptr->next != last)
        {
            if (ptr->data > ptr->next->data)
            {
                int temp = ptr->data;
                ptr->data = ptr->next->data;
                ptr->next->data = temp;
                swapped = 1;
            }
            ptr = ptr->next;
        }
        last = ptr;
    } while (swapped);
}

int main()
{
    int num;
    struct node *head = NULL;
    struct node *temp;

    printf("Enter the number of elements you want to enter in a linked list: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter %d element: ", i);
        newNode->data = rand() % 90 + 10;
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

    printf("Original linked list:\n");
    display(head);

    bubbleSort(head);

    printf("Sorted linked list:\n");
    display(head);

    return 0;
}
