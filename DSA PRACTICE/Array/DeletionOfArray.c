#include <stdio.h>

int main()
{
    int arr[50];
    int n, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements in the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nThe entered array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }

    printf("\nEnter the position you want to delete: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1)
    {
        printf("Invalid position");
    }
    else
    {
        for (int i = pos - 1; i <= n; i++)
        {
            arr[i] = arr[i + 1];
        }

        n--;
    }

    printf("\nThe modified array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}
