#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        int min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        // Swap the elements
        if (min != i)
        {
            swap(&arr[i], &arr[min]);
        }
    }
}

// Function to generate random elements in the array
void populateArrayRandomly(int arr[], int n)
{
    srand(time(NULL)); // Seed for random number generation
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100; // Generate random numbers between 0 and 99
    }
}

int main()
{
    int n = 10; // Choose a sufficiently large value for n
    int arr[n];

    // Populate array with random elements
    populateArrayRandomly(arr, n);

    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // Perform selection sort
    selectionSort(arr, n);

    printf("\nSorted array using Selection Sort algorithm: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
