#include <stdio.h>
#include <stdlib.h>
void display();
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *newNode, *tail, *temp;
int choice;

void insertionAtBeginning()
{
    if (head == NULL)
    {
        printf("\nNo memeory allocated");
    }
    else
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter the data you want to insert : ");
        scanf("%d", &newNode->data);
        newNode->next = head;
        head = newNode;

        printf("Data inserted");
        display(head);
    }
}

void insertionAtMiddle()
{
    int pos, i = 1;
    printf("\nEnter the position you want to  insert data :");
    scanf("%d", &pos);
    if (head == NULL)
    {
        printf("\nNo memory allocated");
    }
    else
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        temp = head;
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }
        printf("\nEnter the data you want to insert :");
        scanf("%d", &newNode->data);
        newNode->next = temp->next;
        temp->next = newNode;
    }
    display(head);
}

// void insertionAtEnd()
// {
//     if (head == NULL)
//     {
//         printf("No memory allocated");
//     }
//     else
//     {
//         newNode = (struct node *)malloc(sizeof(struct node));
//         printf("\nEnter the data you want to insert");
//         scanf("%d", &newNode->data);
//         temp = head;
//         while (temp->next != NULL)
//         {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//         newNode->next = NULL;
//     }
//     display(head);
// }
void insertionAtEnd()
{
    if (head == NULL)
    {
        printf("No memory allocated");
    }
    else
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter the data you want to insert");
        scanf("%d", &newNode->data);
        tail->next = newNode;
        tail = newNode;
        tail->next = NULL;
    }
    display(head);
}

void deletionAtBeginning()
{
    temp = head;
    head = temp->next;
    free(temp);
    display(head);
}

void deletionAtMiddle()
{
    int pos, i = 1;
    printf("Enter the position you want to delete :");
    scanf("%d", &pos);
    struct node *nextNode;
    temp = head;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    nextNode = temp->next;
    temp->next = nextNode->next;
    free(nextNode);
    display(head);
}

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
    tail = preNode;
    free(temp);
    display(head);
}

void display(struct node *head)
{
    int count = 0;
    printf("Elements in the linked list are :\n");
    temp = head;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
        count++;
    }
    printf("\nTotal elements in the linked list are:%d\n", count);
}
void clearLinkedList()
{

    while (head != NULL)
    {
        temp = head;
        head = head->next;
        display(head);
        free(temp);
    }
}

void main()
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
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    display(head);

    do
    {
        printf("\nSelect an operation : \n\t1. Insertion at beginning \n\t2. Insertion at specific position \n\t3. Insertion at end \n\t4. Deleting from beginning \n\t5. Deleting from a specific position \n\t6. Deleting last node\n\t7. Exit \n\t8. Display  \n\t9.Clear Linked list");
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
            exit(0);
            break;
        case 8:
            display(head);
            break;
        case 9:
            clearLinkedList();
            break;
        default:
            printf("Invalid option");
        }
    } while (choice != 10);
}