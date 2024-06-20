#include <stdio.h>
void bubbleSort(int arr[], int n)
{
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
}
void main()
{
    int arr[] = {6, 12, 6, 12, -256, 69};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Before Bubble Sort\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t,", arr[i]);
    }
    bubbleSort(arr, n);
    printf("\nAfter Bubble Sort\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t,", arr[i]);
    }
}