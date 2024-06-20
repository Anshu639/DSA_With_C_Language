#include <stdio.h>
int main()
{
    int n1, n2;
    int *ptr1, *ptr2;
    printf("Enter first number\n");
    scanf("%d", &n1);
    printf("Enter second number\n");
    scanf("%d", &n2);
    ptr1 = &n1;
    ptr2 = &n2;
    if (*ptr1 > *ptr2)
    {
        printf("First number is greater than the second one.\n");
    }
    else
    {
        printf("Second number is greater than the first one.\n");
    }

    return 0;
}