#include <stdio.h>
#include <stdlib.h>
void display();
struct node
{
    struct node *next;
    struct node *prev;
    int data;
};
struct node *head = NULL, *tail, *temp, *newNode;

void insertionAtBeginning()
{
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data to be inserted: ");
    scanf("%d", &newNode->data);
    newNode->next = head;
    newNode->prev = tail;
    if (head == NULL)
    {
        head = tail = newNode;
        newNode->prev = head;
        newNode->next = head;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        newNode->prev = tail;
        tail->next = newNode;
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
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data you want to insert: ");
        scanf("%d", &newNode->data);
        newNode->next = head;
        head->prev = newNode;
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
    display(head);
}
void deletionAtBeginning()
{
    if (head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        temp = head;
        head = temp->next;

        if (head != NULL) // Check if the list is not empty after deletion
        {
            head->prev = tail;
            tail->next = head;
        }
        else
        {
            tail = NULL; // Update tail to NULL if the list becomes empty
        }

        free(temp);
    }
    display(head);
}

void display(struct node *head)
{
    printf("Elements in the linked list are :");
    int count = 0;
    temp = head;
    while (temp != tail)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
        count++;
    }
    printf("%d\n", temp->data);
    printf("\nTotal number of elements in the linked list are %d\n", count + 1);
    //! Check it will frint the first node data and last node data
    // printf("%d\n", temp->next->data);
    // printf("%d\n", head->prevv->data);
}
void reverse_display(struct node *head)
{
    int count = 0;
    temp = tail; // Start from the tail

    printf("Elements in the linked list (in reverse order) are:\t");
    while (temp->prev != tail)
    {
        printf("%d\t", temp->data);
        temp = temp->prev;
        count++;
    }
    printf("%d", temp->data);
    printf("\nTotal elements in the linked list are:%d\n", count);
}

void main()
{
    int num, choice;
    printf("enterr hhow many elements you want to enter:");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("enter  %d  element data :", i);
        scanf("%d", &newNode->data);

        if (head == NULL)
        {
            head = tail = newNode;
            newNode->next = head;
            newNode->prev = head;
        }
        else
        {
            newNode->prev = tail;
            tail->next = newNode;
            newNode->next = head;
            head->prev = newNode;
            tail = newNode;
        }
    }
    display(head);
    do
    {

        printf("\nSelect an operation : \n\t1. Insertion at beginning \n\t2. Insertion at specific position \n\t3. Insertion at end \n\t4. Deleting from beginning \n\t5. Deleting from a specific position \n\t6. Deleting last node \n\t7. Reverse display list");
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
    } while (choice != 8);
}
