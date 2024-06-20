#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate random elements in the array
void populateArrayRandomly(int arr[], int n)
{
    srand(time(NULL)); // Seed for random number generation
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100; // Generate random numbers between 0 and 99
    }
}

void insertionSort(int arr[], int n)
{
    int i, j;
    for (i = 1; i < n; i++)
    {
        int temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
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

    // Perform insertion sort
    insertionSort(arr, n);

    printf("\nSorted array using Insertion Sort algorithm: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
