#include <stdio.h>

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

int main()
{
    int arr[] = {78, 45, 76, 34, 23, 12, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }

    selectionSort(arr, n);

    printf("\n\nSorted array using Selection Sort algorithm is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}
