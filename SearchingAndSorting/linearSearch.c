#include <stdio.h>
int main()
{
    int arr[] = {15, 5, 20, 35, 2, 42, 67, 17};
    int found = 0;
    int data;
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Enter the element you want to search?");
    scanf("%d", &data);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == data)
        {
            printf("Element is present at index %d\n", i);
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        printf("Element not found in array.");
    }
    return 0;
}
