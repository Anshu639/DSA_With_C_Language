#include <stdio.h>
void main()
{
    int number[10];
    for (int i = 0; i < 10; i++)
    {

        printf("Enter the number :");
        scanf("%d ", &number[i]);
    }
    for (int i = 10; i > 1; i--)
    {
        printf("%2d,", number[i]);
    }
}