#include <stdio.h>
#include <stdlib.h>
void display();
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *temp, *newNode, *tail;
// void insertionAtBeginning()
// {
//     if (head == NULL)
//     {
//         printf("No memeoy allocated linked list is empty");
//     }
//     else
//     {
//         newNode = (struct node *)malloc(sizeof(struct node));
//         printf("Enter the data you want to insert :");
//         scanf("%d", &newNode->data);
//         newNode->next = head;
//         // Update the last node of the linkedlist
//         temp = head;
//         while (temp->next != head)
//         {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//         head = newNode;
//     }
//     display(head);
// }
void insertionAtBeginning()
{
    if (head == NULL)
    {
        printf("No memeoy allocated linked list is empty");
    }
    else
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data you want to insert :");
        scanf("%d", &newNode->data);
        newNode->next = head;
        head = newNode;
        tail->next = head;
    }
    display(head);
}
void insertionAtMiddle()
{
    if (head == NULL)
    {
        printf("\nLinked List is Empty\n");
    }
    else
    {
        int pos, i = 1;
        printf("\nEnter position where element has to be inserted: ");
        scanf("%d", &pos);
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
        temp->next = newNode;
    }
    display(head);
}
// Insertion at end we can do it with two ways tail pointer and by using temp variable we can use while loop
void insertionAtEnd()
{
    if (head == NULL)
    {
        printf("LinkedList is empty");
    }
    else
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data you want to insert :");
        scanf("%d", &newNode->data);
        tail->next = newNode;
        tail = newNode;
        tail->next = head;
    }
    display(head);
}
void deletionAtBeginning()
{
    if (head == NULL)
    {
        printf("Linked list is empty.\n");
    }
    else
    {
        temp = head;
        head = temp->next;
        tail->next = head;
        free(temp);
    }
    display(head);
}
void deletionAtMiddle()
{
    struct node *nextNode;
    int pos, i = 1;
    printf("Enter the position you want to insert");
    scanf("%d", &pos);
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
    if (head == NULL)
    {
        printf("Linked list is empty.\n");
    }
    else
    {
        temp = head;
        while (temp->next != head)
        {
            preNode = temp;
            temp = temp->next;
        }
        preNode->next = head;
        free(temp);
    }
    display(head);
}
void display(struct node *head)
{
    int count = 0;
    if (head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        temp = head;
        while (temp->next != head)
        {
            printf("%d\t", temp->data);
            temp = temp->next;
            count++;
        }
        printf("%d\t", temp->data); // for last element of the list
    }
    printf("\nTotal number of elements in the linked list are : %d", count + 1);
}
int main()
{
    int num, choice;
    printf("Enter the number of elements you want in linked list:");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter element %d data : ", i);
        scanf("%d", &newNode->data);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        tail->next = head;
    }
    display(head);
    do
    {

        printf("\nSelect an operation : \n\t1. Insertion at beginning \n\t2. Insertion at specific position \n\t3. Insertion at end \n\t4. Deleting from beginning \n\t5. Deleting from a specific position \n\t6. Deleting last node");
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
        default:
            printf("Invalid option");
        }
    } while (choice != 7);
    return 0;
}