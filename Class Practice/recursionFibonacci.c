#include <stdio.h>
int fibonacci(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}
void main()
{
    int num;
    printf("Enter the number :");
    scanf("%d", &num);
    for (int i = 0; i <= num; i++)
    {
        printf("%d, ", fibonacci(i));
    }
}