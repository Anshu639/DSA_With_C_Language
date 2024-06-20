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
    int arr[] = {78, 45, 76, 34, 23, 12, 6};
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
