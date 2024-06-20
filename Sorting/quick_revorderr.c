#include <stdio.h>

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
            printf("\t i== %d\t", i);

        } while (a[i] <= pivot);
        printf("\n");

        do
        {
            j--;
            printf("\t j== %d\t", j);
        } while (a[j] > pivot);
        printf("\n");

        if (i < j)
        {
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[low], &a[j]);
    return j;
}

void Quicksort(int a[], int low, int high)
{
    if (low < high)
    {

        int j = partition(a, low, high);
        Quicksort(a, low, j);
        Quicksort(a, j + 1, high);
    }
}

int main()
{
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 4, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }

    Quicksort(arr, 0, n);

    printf("\n\nSorted array using Quick Sort algorithm is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}
