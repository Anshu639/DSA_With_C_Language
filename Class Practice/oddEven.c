#include <stdio.h>
void main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d elements", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] = arr[i + 1];
        }
        else
        {
            arr[i + 1] = arr[i];
        }
        printf("%d", arr[i]);
    }
}