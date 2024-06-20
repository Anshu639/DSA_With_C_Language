#include <stdio.h>
int factorial(int x)
{
    int f;
    if (x == 1 || x == 0)
    {
        return (1);
    }
    else
    {
        f = x * factorial(x - 1);
    }
    return f;
}
int main()
{
    int num, fact;
    printf("Enter the number :");
    scanf("%d", &num);
    fact = factorial(num);
    printf("The factorial of a number is %d", fact);
    return 0;
}