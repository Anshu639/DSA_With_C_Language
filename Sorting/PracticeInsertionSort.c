#include <stdio.h>
void insertionSort(int arr[], int n)
{
    int i, j;
    for (i = 1; i < n; i++)
    {
        int temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
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
    insertionSort(arr, n);
    printf("\n\nSorted array using Insertion Sort algorithm is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ,", arr[i]);
    }
}