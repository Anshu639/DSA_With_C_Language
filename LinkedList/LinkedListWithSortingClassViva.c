#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[50];
    char dob[12];
    int rollnumber;
    struct Student *next;
};

typedef struct Student Student;

Student *createStudent(char name[], char dob[], int rollNo)
{
    Student *newStudent = (Student *)malloc(sizeof(Student));
    strcpy(newStudent->name, name);
    strcpy(newStudent->dob, dob);
    newStudent->rollnumber = rollNo;
    newStudent->next = NULL;
    return newStudent;
}

Student *insertionAtBeginning(Student *head)
{
    printf("Enter the name: ");
    char name[50];
    scanf("%s", name);
    printf("Enter the date of birth (YYYY-MM-DD): ");
    char dob[12];
    scanf("%s", dob);
    printf("Enter the roll number: ");
    int rollNo;
    scanf("%d", &rollNo);

    Student *newNode = createStudent(name, dob, rollNo);
    newNode->next = head;
    return newNode;
}

void display(Student *head)
{
    int count = 0;
    printf("Elements in the linked list are:\n");
    Student *temp = head;

    while (temp != NULL)
    {
        printf("Name: %s\tDate of Birth: %s\tRoll Number: %d\n", temp->name, temp->dob, temp->rollnumber);
        temp = temp->next;
        count++;
    }

    printf("\nTotal elements in the linked list are: %d\n", count);
}

void bubbleSort(Student *head)
{
    int swapped;
    Student *ptr1;
    Student *lptr = NULL;

    if (head == NULL)
        return;

    do
    {
        swapped = 0;
        ptr1 = head;

        while (ptr1->next != lptr)
        {
            if (strcmp(ptr1->name, ptr1->next->name) > 0)
            {
                char tempName[50];
                char tempDOB[12];
                int tempRollNumber;

                strcpy(tempName, ptr1->name);
                strcpy(tempDOB, ptr1->dob);
                tempRollNumber = ptr1->rollnumber;

                strcpy(ptr1->name, ptr1->next->name);
                strcpy(ptr1->dob, ptr1->next->dob);
                ptr1->rollnumber = ptr1->next->rollnumber;

                strcpy(ptr1->next->name, tempName);
                strcpy(ptr1->next->dob, tempDOB);
                ptr1->next->rollnumber = tempRollNumber;

                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);
}

Student *mergeAndSortLists(Student *headA, Student *headB)
{
    Student *mergedList = NULL;
    Student *currentA = headA;
    Student *currentB = headB;

    if (currentA == NULL)
        return headB;
    if (currentB == NULL)
        return headA;

    if (strcmp(currentA->name, currentB->name) < 0)
    {
        mergedList = currentA;
        currentA = currentA->next;
    }
    else
    {
        mergedList = currentB;
        currentB = currentB->next;
    }

    Student *currentMerged = mergedList;

    while (currentA != NULL && currentB != NULL)
    {
        if (strcmp(currentA->name, currentB->name) < 0)
        {
            currentMerged->next = currentA;
            currentA = currentA->next;
        }
        else
        {
            currentMerged->next = currentB;
            currentB = currentB->next;
        }
        currentMerged = currentMerged->next;
    }

    while (currentA != NULL)
    {
        currentMerged->next = currentA;
        currentA = currentA->next;
        currentMerged = currentMerged->next;
    }

    while (currentB != NULL)
    {
        currentMerged->next = currentB;
        currentB = currentB->next;
        currentMerged = currentMerged->next;
    }

    bubbleSort(mergedList);

    return mergedList;
}

void clearList(Student *head)
{
    while (head != NULL)
    {
        Student *temp = head;
        head = head->next;
        free(temp);
    }
}

int main()
{
    Student *headA = NULL;
    Student *headB = NULL;
    int choice;

    int num;
    printf("Enter the number of elements you want to enter in list A: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        printf("Enter name for element %d: ", i);
        char name[50];
        scanf("%s", name);
        printf("Enter date of birth for element %d (YYYY-MM-DD): ", i);
        char dob[12];
        scanf("%s", dob);
        printf("Enter roll number for element %d: ", i);
        int rollNo;
        scanf("%d", &rollNo);

        Student *newNode = createStudent(name, dob, rollNo);
        newNode->next = NULL;

        if (headA == NULL)
        {
            headA = newNode;
        }
        else
        {
            Student *temp = headA;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    printf("Enter the number of elements you want to enter in list B: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        printf("Enter name for element %d: ", i);
        char name[50];
        scanf("%s", name);
        printf("Enter date of birth for element %d (YYYY-MM-DD): ", i);
        char dob[12];
        scanf("%s", dob);
        printf("Enter roll number for element %d: ", i);
        int rollNo;
        scanf("%d", &rollNo);

        Student *newNode = createStudent(name, dob, rollNo);
        newNode->next = NULL;

        if (headB == NULL)
        {
            headB = newNode;
        }
        else
        {
            Student *temp = headB;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    do
    {
        printf("\nSelect an operation for list A:\n1. Insertion at beginning\n2. Display A\n3. Clear Linked list\n");
        printf("\n4. Insertion at beginning\n5. Display B\n6. Clear Linked list\n7. Merge and Sort\n8. Exit\n");
        printf("Enter the Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            headA = insertionAtBeginning(headA);
            break;
        case 2:
            display(headA);
            break;
        case 3:
            clearList(headA);
            break;
        case 4:
            headB = insertionAtBeginning(headB);
            break;
        case 5:
            display(headB);
            break;
        case 6:
            clearList(headB);
            break;
        case 7:
            headA = mergeAndSortLists(headA, headB);
            display(headA);
            break;
        case 8:
            exit(0);
            break;
        default:
            printf("Invalid option\n");
        }
    } while (choice != 8);

    return 0;
}