#include <stdio.h>
void main()
{
    int num = 10;
    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d is a not a prime number\n", i);
        }
        else
        {
            printf("%d is a prime number\n", i);
        }
    }
}