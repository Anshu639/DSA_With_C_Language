#include <stdio.h>
void main()
{
    // Pattern 1
    int count = 1;
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", count);
            count++;
        }

        printf("\n");
    }

    // Pattern 2
    int num;
    printf("Enter the number of rows :");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        int value = 1;
        for (int j = 0; j <= i; j++)
        {
            printf("%d", value);
            value = value * (i - j) / (j + 1);
        }
        printf("\n");
    }
}
