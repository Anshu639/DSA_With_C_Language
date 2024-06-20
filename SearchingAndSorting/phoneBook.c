#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Contact
{
    char name[50];
    char phone[15];
    struct Contact *next;
    struct Contact *left, *right;
} Contact;

// Function prototypes
Contact *createContact(char name[], char phone[]);
void addContactToArray(Contact *contacts[], int *count, char name[], char phone[]);
void displayContactsFromArray(Contact *contacts[], int count);
Contact *addContactToLinkedList(Contact *head, char name[], char phone[]);
void displayContactsFromLinkedList(Contact *head);
Contact *addContactToTree(Contact *root, char name[], char phone[]);
void displayContactsFromTree(Contact *root);
void freeContactsLinkedList(Contact *head);
void freeContactsTree(Contact *root);
Contact *searchContactByName(Contact *root, char name[]);
Contact *searchContactByPhone(Contact *root, char phone[]);
Contact *deleteContactByName(Contact *root, char name[]);
Contact *deleteContactByPhone(Contact *root, char phone[]);
void updateContactInfo(Contact *root, char oldName[], char newName[], char newPhone[]);
void displayContactsPreOrder(Contact *root);
void displayContactsPostOrder(Contact *root);
int countTotalContacts(Contact *root);
void displayCategories(Contact *root);

// UI function prototypes
void printMenu();
void printSeparator();
void displayContact(Contact *contact);
void displayStats(Contact *root);

int main()
{
    Contact *contactsArray[100];
    int arrayCount = 0;

    Contact *linkedlistHead = NULL;

    Contact *treeRoot = NULL;

    int choice;
    char name[50];
    char phone[15];

    do
    {
        printMenu();
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter contact name: ");
            scanf("%s", name);
            printf("Enter contact phone: ");
            scanf("%s", phone);

            addContactToArray(contactsArray, &arrayCount, name, phone);
            linkedlistHead = addContactToLinkedList(linkedlistHead, name, phone);
            treeRoot = addContactToTree(treeRoot, name, phone);

            printf("Contact added successfully.\n");
            break;

        case 2:
            printf("\nContacts in Array:\n");
            displayContactsFromArray(contactsArray, arrayCount);
            printSeparator();

            printf("\nContacts in Linked List:\n");
            displayContactsFromLinkedList(linkedlistHead);
            printSeparator();

            printf("\nContacts in Tree (In-order traversal):\n");
            displayContactsFromTree(treeRoot);
            break;

        case 3:
            printf("Enter contact name to search: ");
            scanf("%s", name);
            Contact *searchResult = searchContactByName(treeRoot, name);
            if (searchResult != NULL)
            {
                printf("Contact found:\n");
                displayContact(searchResult);
            }
            else
            {
                printf("Contact not found.\n");
            }
            break;

        case 4:
            printf("Enter contact name to delete: ");
            scanf("%s", name);
            treeRoot = deleteContactByName(treeRoot, name);
            linkedlistHead = deleteContactByName(linkedlistHead, name);
            printf("Contact deleted successfully.\n");
            break;

        case 5:
            printf("Enter contact name to update: ");
            scanf("%s", name);
            Contact *contactToUpdate = searchContactByName(treeRoot, name);
            if (contactToUpdate != NULL)
            {
                printf("Enter new name: ");
                scanf("%s", name);
                printf("Enter new phone: ");
                scanf("%s", phone);
                updateContactInfo(treeRoot, contactToUpdate->name, name, phone);
                printf("Contact updated successfully.\n");
            }
            else
            {
                printf("Contact not found.\n");
            }
            break;

        case 6:
            displayStats(treeRoot);
            break;

        case 7:
            freeContactsLinkedList(linkedlistHead);
            freeContactsTree(treeRoot);
            break;

        default:
            printf("Invalid choice. Please enter again.\n");
        }

        printf("\nPress Enter to continue...");
        while (getchar() != '\n')
            ;                   // Clear the input buffer
        getchar();              // Wait for Enter key
        system("clear || cls"); // Clear the console screen
    } while (choice != 7);

    return 0;
}

Contact *createContact(char name[], char phone[])
{
    Contact *newContact = (Contact *)malloc(sizeof(Contact));
    strcpy(newContact->name, name);
    strcpy(newContact->phone, phone);
    newContact->next = NULL;
    newContact->left = newContact->right = NULL;
    return newContact;
}

void addContactToArray(Contact *contacts[], int *count, char name[], char phone[])
{
    contacts[*count] = createContact(name, phone);
    (*count)++;
}

void displayContactsFromArray(Contact *contacts[], int count)
{
    for (int i = 0; i < count; i++)
    {
        displayContact(contacts[i]);
    }
}

Contact *addContactToLinkedList(Contact *head, char name[], char phone[])
{
    Contact *newContact = createContact(name, phone);
    newContact->next = head;
    return newContact;
}

void displayContactsFromLinkedList(Contact *head)
{
    while (head != NULL)
    {
        displayContact(head);
        head = head->next;
    }
}

Contact *addContactToTree(Contact *root, char name[], char phone[])
{
    if (root == NULL)
    {
        return createContact(name, phone);
    }

    int compareResult = strcmp(name, root->name);

    if (compareResult < 0)
    {
        root->left = addContactToTree(root->left, name, phone);
    }
    else if (compareResult > 0)
    {
        root->right = addContactToTree(root->right, name, phone);
    }

    return root;
}

void displayContactsFromTree(Contact *root)
{
    if (root != NULL)
    {
        displayContactsFromTree(root->left);
        displayContact(root);
        displayContactsFromTree(root->right);
    }
}

void freeContactsLinkedList(Contact *head)
{
    Contact *current = head;
    while (current != NULL)
    {
        Contact *temp = current;
        current = current->next;
        free(temp);
    }
}

void freeContactsTree(Contact *root)
{
    if (root != NULL)
    {
        freeContactsTree(root->left);
        freeContactsTree(root->right);
        free(root);
    }
}

Contact *searchContactByName(Contact *root, char name[])
{
    while (root != NULL)
    {
        int compareResult = strcmp(name, root->name);
        if (compareResult == 0)
        {
            return root;
        }
        else if (compareResult < 0)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return NULL;
}

Contact *searchContactByPhone(Contact *root, char phone[])
{
    while (root != NULL)
    {
        int compareResult = strcmp(phone, root->phone);
        if (compareResult == 0)
        {
            return root;
        }
        else if (compareResult < 0)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return NULL;
}

Contact *deleteContactByName(Contact *root, char name[])
{
    if (root == NULL)
    {
        return root;
    }

    int compareResult = strcmp(name, root->name);

    if (compareResult < 0)
    {
        root->left = deleteContactByName(root->left, name);
    }
    else if (compareResult > 0)
    {
        root->right = deleteContactByName(root->right, name);
    }
    else
    {
        if (root->left == NULL)
        {
            Contact *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            Contact *temp = root->left;
            free(root);
            return temp;
        }

        Contact *temp = root->right;
        while (temp->left != NULL)
        {
            temp = temp->left;
        }

        strcpy(root->name, temp->name);
        strcpy(root->phone, temp->phone);

        root->right = deleteContactByName(root->right, temp->name);
    }
    return root;
}

Contact *deleteContactByPhone(Contact *root, char phone[])
{
    if (root == NULL)
    {
        return root;
    }

    int compareResult = strcmp(phone, root->phone);

    if (compareResult < 0)
    {
        root->left = deleteContactByPhone(root->left, phone);
    }
    else if (compareResult > 0)
    {
        root->right = deleteContactByPhone(root->right, phone);
    }
    else
    {
        if (root->left == NULL)
        {
            Contact *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            Contact *temp = root->left;
            free(root);
            return temp;
        }

        Contact *temp = root->right;
        while (temp->left != NULL)
        {
            temp = temp->left;
        }

        strcpy(root->name, temp->name);
        strcpy(root->phone, temp->phone);

        root->right = deleteContactByPhone(root->right, temp->phone);
    }
    return root;
}

void updateContactInfo(Contact *root, char oldName[], char newName[], char newPhone[])
{
    Contact *contactToUpdate = searchContactByName(root, oldName);
    if (contactToUpdate != NULL)
    {
        strcpy(contactToUpdate->name, newName);
        strcpy(contact
