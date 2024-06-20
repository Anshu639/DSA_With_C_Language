#include <stdio.h>
void main()
{
    int arr[5];
    int positive = 0, negative = 0, zero = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d elements", i);
        scanf("%d", arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < 0)
        {
            negative++;
        }
        else if (arr[i] > 0)
        {
            positive++;
        }
        else
        {
            zero++;
        }
    }
    printf("Positive no %d", positive);
    printf("Negative no %d", negative);
    printf("Zero no %d", zero);
}