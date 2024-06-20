#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the bucket (linked list)
struct Node
{
    float data;
    struct Node *next;
};

void bucketSort(float arr[], int n)
{

    int numBuckets = 10;
    struct Node *buckets[numBuckets];

    for (int i = 0; i < numBuckets; i++)
    {
        buckets[i] = NULL;
    }

    for (int i = 0; i < n; i++)
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        int bucketIndex = numBuckets * arr[i];
        newNode->data = arr[i];
        newNode->next = buckets[bucketIndex];
        buckets[bucketIndex] = newNode;
    }

    for (int i = 0; i < numBuckets; i++)
    {

        struct Node *current = buckets[i];
        while (current != NULL)
        {
            struct Node *temp = current->next;
            while (temp != NULL)
            {
                if (current->data > temp->data)
                {
                    float tmp = current->data;
                    current->data = temp->data;
                    temp->data = tmp;
                }
                temp = temp->next;
            }
            current = current->next;
        }
    }

    int index = 0;
    for (int i = 0; i < numBuckets; i++)
    {
        struct Node *current = buckets[i];
        while (current != NULL)
        {
            arr[index++] = current->data;
            current = current->next;
        }
    }
}
u int main()
{
    // float arr[] = {0.79, 0.13, 0.64, 0.39, 0.20, 0.89, 0.53, 0.42, 0.06, 0.94};
    float arr[] = {0.79, 0.77, 0.74, 0.76, 0.70, 0.73, 0.78};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array elements before sorting:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%.2f, ", arr[i]);
    }

    bucketSort(arr, n);

    printf("\nArray elements after sorting:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%.2f, ", arr[i]);
    }
    return 0;
}
