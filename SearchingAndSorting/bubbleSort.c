#include <stdio.h>
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}
int main()
{
    int arr[] = {15, 16, 6, 8, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Before sorting\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    bubbleSort(arr, n);
    printf("\nAfter sorting\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}