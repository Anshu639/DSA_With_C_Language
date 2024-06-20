#include <stdio.h>
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        int flag = 0;
        for (j = 0; j < n - 1 - i; j++)
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
    int arr[] = {78, 45, 76, 34, 23, 12, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array is:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ,", arr[i]);
    }
    bubbleSort(arr, n);
    printf("\n\nSorted array using Bubble Sort algorithm is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ,", arr[i]);
    }
}