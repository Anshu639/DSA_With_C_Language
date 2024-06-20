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
        printf("%d", arr[i]);
        if (i < n - 1)
        {
            printf(", ");
        }
    }

    printf("\nEnter the position you want to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1)
    {
        printf("Invalid position");
    }
    else
    {
        int num;
        printf("Enter the element to be inserted: ");
        scanf("%d", &num);

        for (int i = n - 1; i >= pos - 1; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[pos - 1] = num;
        n++;

        printf("\nThe modified array is: ");
        for (int i = 0; i < n; i++)
        {
            printf("%d", arr[i]);
            if (i < n - 1)
            {
                printf(", ");
            }
        }
    }

    return 0;
}
