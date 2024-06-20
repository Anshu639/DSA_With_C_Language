#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i, j;
    i = low;
    j = high;
    while (i < j)
    {
        do
        {
            i++;
        } while (a[i] <= pivot);

        do
        {
            j--;
        } while (a[j] > pivot);

        if (i < j)
        {
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[low], &a[j]);
    return j;
}

void quicksort(int a[], int low, int high)
{
    if (low < high)
    {
        int j = partition(a, low, high);
        quicksort(a, low, j);
        quicksort(a, j + 1, high);
    }
}

// Function to generate random elements in the array
void populateArrayRandomly(int a[], int n)
{
    srand(time(NULL)); // Seed for random number generation
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 100; // Generate random numbers between 0 and 99
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

    // Perform quick sort
    quicksort(arr, 0, n - 1);

    printf("\nSorted array using Quick Sort algorithm: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
