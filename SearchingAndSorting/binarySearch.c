#include <stdio.h>
int binarySearch(int arr[], int n, int data)
{
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == data)
        {
            return mid;
        }
        else if (data < arr[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {5, 9, 17, 23, 25, 45, 59, 63, 71, 89};
    int n = sizeof(arr) / sizeof(arr[0]);
    int data;
    printf("Enter the data you want to search?");
    scanf("%d", &data);
    int result = binarySearch(arr, n, data);
    if (result == -1)
    {
        printf("\nElement is not present in array\n");
    }
    else
    {
        printf("\nElement found at index %d \n", result);
    }
    return 0;
}