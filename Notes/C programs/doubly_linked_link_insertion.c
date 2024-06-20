#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head;

void insertFirst();
void insertMid();
void insertEnd();
void display();

int main() 
{
    int ch,pos;

    do {
        printf("\nSelect an operation:\n\t1. Insertion at beginning\n\t2. Insertion at specific position\n\t3. Insertion at end\n\t4. Deletion at beginning\n\t5. Deletion at specific position\n\t6. Deletion at end\n\t7. Exit");
        printf("\n\nEnter the Choice: ");
        scanf("%d", &ch);

        switch (ch) 
        {
            case 1:
                insertFirst();
                display();
                break;

            case 2:
                insertMid();
                display();
                break;

            case 3:
                insertEnd();
                display();
                break;
            
            case 4:
                deleteAtBeginning();
                display();
                break;

            case 5:
                printf("Enter the position : ");
                scanf("%d",&pos);
                deleteAtMiddle();                
                display();
                break;

            case 6:
                deleteAtEnd(); 
                display();
                break;

            case 7:
                printf("\nExiting the program...\n");
                exit(0);

            default:
                printf("\nInvalid choice, try again...\n");
                break;
        }
    } while (ch != 7);

    return 0;
}

void insertFirst() 
{
    struct node *ptr;
    
    ptr = (struct node *)malloc(sizeof(struct node));

    if (ptr == NULL) 
    {
        printf("Overflow");
    } 
    else 
    {
        printf("\nEnter the data you want to insert: ");
        scanf("%d", &ptr->data);

        if (head == NULL) 
        {
            ptr->prev = NULL;
            ptr->next = NULL;
            head = ptr;
        } 
        else 
        {
            ptr->prev = NULL;
            ptr->next = head;
            head->prev = ptr;
            head = ptr;
        }
    }
}

void insertMid() 
{
    struct node *ptr, *temp;
    int position;

    ptr = (struct node *)malloc(sizeof(struct node));

    if (ptr == NULL) 
    {
        printf("Overflow");
    } 
    else 
    {
        printf("\nEnter the data you want to insert: ");
        scanf("%d", &ptr->data);

        printf("Enter the position to insert (1-based index): ");
        scanf("%d", &position);

        temp = head;

        int count = 1;

        while (count < position - 1 && temp != NULL) 
        {
            temp = temp->next;
            count++;
        }

        if (temp == NULL) 
        {
            printf("Invalid position to insert.\n");
            free(ptr);
            return;
        }

        ptr->prev = temp;
        ptr->next = temp->next;

        if (temp->next != NULL) 
        {
            temp->next->prev = ptr;
        }

        temp->next = ptr;
    }
}

void insertEnd() 
{
    struct node *ptr, *temp;

    ptr = (struct node *)malloc(sizeof(struct node));

    if (ptr == NULL) {
        printf("Overflow");
    } else {
        printf("\nEnter the data you want to insert: ");
        scanf("%d", &ptr->data);

        if (head == NULL) {
            ptr->prev = NULL;
            ptr->next = NULL;
            head = ptr;
        } else {
            temp = head;

            while (temp->next != NULL) {
                temp = temp->next;
            }

            ptr->prev = temp;
            ptr->next = NULL;
            temp->next = ptr;
        }
    }
}

void deleteAtBeginning() 
{
    if (head == NULL) 
    {
        printf("List is empty. Deletion failed.\n");
    }
    else 
    {
        struct node *temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        free(temp);
    }
}

void deleteAtEnd() 
{
    if (head == NULL) 
    {
        printf("List is empty. Deletion failed.\n");
    } 
    else 
    {
        struct node *temp = head;
        while (temp->next != NULL) 
        {
            temp = temp->next;
        }
        if (temp->prev != NULL) 
        {
            temp->prev->next = NULL;
        } 
        else 
        {
            head = NULL; // If there is only one node
        }
        free(temp);
    }
}

void deleteAtMiddle(int position) 
{
    if (head == NULL) 
    {
        printf("List is empty. Deletion failed.\n");
        return;
    }

    if (position <= 0) 
    {
        printf("Invalid position. Deletion failed.\n");
        return;
    }

    struct node *temp = head;
    int count = 1;

    while (count < position && temp != NULL) 
    {
        temp = temp->next;
        count++;
    }

    if (temp == NULL) 
    {
        printf("Invalid position. Deletion failed.\n");
        return;
    }

    if (temp->prev != NULL) 
    {
        temp->prev->next = temp->next;
    } 
    else 
    {
        head = temp->next; 
    }

    if (temp->next != NULL) 
    {
        temp->next->prev = temp->prev;
    }

    free(temp);
}

void display() 
{
    struct node *temp;
    temp = head;

    if (temp == NULL) 
    {
        printf("List is empty");
    } 
    else 
    {
        printf("\nElements of list are: ");
        while (temp != NULL) 
        {
            printf("\t%d", temp->data);
            temp = temp->next;
        }
    }
}
