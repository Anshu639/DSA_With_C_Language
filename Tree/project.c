#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure for each data entry
typedef struct
{
    int id;
    char name[50];
    float value;
} DataEntry;

// Define a linked list node
typedef struct Node
{
    DataEntry data;
    struct Node *next;
} Node;

// Function to create a new node
Node *createNode(DataEntry data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end of a linked list
void insertNode(Node **head, DataEntry data)
{
    Node *newNode = createNode(data);
    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        Node *current = *head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to print all entries in the linked list
void printList(Node *head)
{
    Node *current = head;
    while (current != NULL)
    {
        printf("ID: %d, Name: %s, Value: %.2f\n", current->data.id, current->data.name, current->data.value);
        current = current->next;
    }
}

// Function to free memory allocated for the linked list
void freeList(Node *head)
{
    Node *current = head;
    Node *next;
    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
}

int main()
{
    Node *dataHead = NULL;

    // Sample data insertion
    DataEntry entry1 = {1, "John", 25.5};
    DataEntry entry2 = {2, "Jane", 30.2};
    DataEntry entry3 = {3, "Bob", 22.8};

    insertNode(&dataHead, entry1);
    insertNode(&dataHead, entry2);
    insertNode(&dataHead, entry3);

    // Print the data
    printf("Original Data:\n");
    printList(dataHead);

    // Perform data analysis or other operations here

    // Free allocated memory
    freeList(dataHead);

    return 0;
}
