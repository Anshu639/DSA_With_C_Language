#include <stdio.h>

void main()
{
    int arr[] = {6, 7, 8, 9, 11, 28};
    // int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Before Bubble Sort\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t,", arr[i]);
    }
    int swap = 0, count = 0;
    for (int i = 0; i < n - 1; i++)

    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf("\nloop runned %d\n", ++count);
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap++;
            }
        }
        if (swap == 0)
        {
            printf("\nalready sorted\n");
            break;
        }
    }
    printf("\nAfter Bubble Sort\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t,", arr[i]);
    }
}