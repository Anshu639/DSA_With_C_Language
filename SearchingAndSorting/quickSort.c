#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int a[], int lb, int ub)
{
    int pivot = a[lb];
    int start = lb;
    int end = ub;

    while (start < end)
    {
        while (a[start] <= pivot)
        {
            start++;
        }
        while (a[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            swap(&a[start], &a[end]);
        }
    }

    swap(&a[lb], &a[end]);
    return end;
}

void quickSort(int a[], int lb, int ub)
{
    if (lb < ub)
    {
        int p = partition(a, lb, ub);
        quickSort(a, lb, p - 1);
        quickSort(a, p + 1, ub);
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

    quickSort(arr, 0, n - 1);

    printf("\n\nSorted array using Quick Sort algorithm is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}
