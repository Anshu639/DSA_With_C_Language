#include <stdio.h>
#include <stdlib.h>
void display();
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL, *temp, *newNode, *tail;
int choice;
void insertionAtBeginning()
{
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data you want to insert :");
    scanf("%d", &newNode->data);
    newNode->next = NULL;
    newNode->prev = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    display(head);
}

void insertionAtMiddle()
{
    int pos, i = 1;
    printf("Enter the position you want to insert element:");
    scanf("%d", &pos);
    if (head == NULL)
    {
        printf("No memory allocated");
    }
    else
    {
        temp = head;
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data you want to insert :");
        scanf("%d", &newNode->data);
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next = newNode;
        newNode->next->prev = newNode;
    }
    display(head);
}
void insertionAtEnd()
{
    if (head == NULL)
    {
        printf("No memoery allocated");
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data you want to insert: ");
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        newNode->prev = temp;
        temp->next = newNode;
    }
    display(head);
}
void deletionAtBeginning()
{
    if (head == NULL)
    {
        printf("List is empty. Nothing to delete.\n");
    }
    else
    {
        temp = head;
        head = temp->next;
        head->prev = NULL;
        free(temp);
        display(head);
    }
}
void deletionAtMiddle()
{
    int pos, i = 1;
    printf("Enter the position you want to delete :");
    scanf("%d", &pos);
    struct node *nextNode, *preNode;

    temp = head;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }

    nextNode = temp->next;
    temp->next = nextNode->next;
    // preNode = temp->next;
    // preNode->prev = temp;
    temp->next->prev = temp;
    free(nextNode);
    display(head);
}
//! By using double pointer
// void deletionAtMiddle()
// {
//     int pos, i = 1;
//     printf("Enter the position you want to delete :");
//     scanf("%d", &pos);
//     struct node *nextNode, *preNode;

//     temp = head;
//     while (i < pos)
//     {
//         temp = temp->next;
//         i++;
//     }
//     temp->prev->next = temp->next;
//     temp->next->prev = temp->prev;
//     free(temp);
//     display(head);
// }

void deletionAtEnd()
{
    struct node *preNode;
    temp = head;
    while (temp->next != NULL)
    {
        preNode = temp;
        temp = temp->next;
    }
    preNode->next = NULL;
    free(temp);
    display(head);
}

//! By using double pointer and tail pointer
// void deletionAtEnd()
// {
//     if (head == NULL)
//     {
//         printf("List is empty. Nothing to delete.\n");
//     }
//     else
//     {
//         if (head->next == NULL)
//         {
//             free(head);
//             head = tail = NULL;
//         }
//         else
//         {
//             temp = tail;
//             tail->prev->next = NULL;
//             tail = tail->prev;
//             free(temp);
//         }
//         display(head);
//     }
// }
void display(struct node *head)
{
    int count = 0;
    temp = head;
    printf("Elements in the linkedlist are :\t");
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
        count++;
    }
    printf("\nTotal elements in the linked list are:%d\n", count);
}
void reverse_display(struct node *head)
{
    int count = 0;
    temp = head;

    while (temp != NULL && temp->next != NULL)
    {
        temp = temp->next;
    }

    printf("Elements in the linkedlist (in reverse order) are :\t");
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->prev;
        count++;
    }
    printf("\nTotal elements in the linked list are:%d\n", count);
}

int main()
{
    int num;
    printf("Enter the elemetns you want to insert in linked list:");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter %d element data : ", i);
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        newNode->prev = NULL;
        if (head == NULL)
        {
            head = temp = tail = newNode;
        }
        else
        {
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
            tail = newNode;
        }
    }
    display(head);
    do
    {
        printf("\nSelect an operation : \n\t1. Insertion at beginning \n\t2. Insertion at specific position \n\t3. Insertion at end \n\t4. Deleting from beginning \n\t5. Deleting from a specific position \n\t6. Deleting last node\n\t7. Reverse displaying  the linked list\n\t");
        printf("\n\nEnter the Choice \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insertionAtBeginning();
            break;
        case 2:
            insertionAtMiddle();
            break;
        case 3:
            insertionAtEnd();
            break;
        case 4:
            deletionAtBeginning();
            break;
        case 5:
            deletionAtMiddle();
            break;
        case 6:
            deletionAtEnd();
            break;
        case 7:
            reverse_display(head);
            break;
        default:
            printf("Invalid option");
        }
    } while (choice != 6);
    return 0;
}
