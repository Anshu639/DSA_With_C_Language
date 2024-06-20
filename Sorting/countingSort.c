#include <stdio.h>

void countingSort(int arr[], int n, int k)
{
    int count[k + 1];
    int b[n];

    for (int i = 0; i <= k; i++)
    {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    for (int i = 1; i <= k; i++)
    {
        count[i] += count[i - 1];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        b[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = b[i];
    }
}

int main()
{
    int arr[] = {2, 1, 1, 0, 2, 5, 4, 0, 2, 8, 7, 7, 9, 2, 0, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 9;

    printf("Array elements before sorting:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }

    countingSort(arr, n, k);

    printf("\nArray elements after sorting:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}
