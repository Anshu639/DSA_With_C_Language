#include <stdio.h>
int sumOfNatural(int num)
{
    int val;
    for (int i = 0; i <= num; i++)
    {
        if (num == 0)
        {
            return 1;
        }
        else
        {
            val = num * (num + 1) / 2;
        }
    }
    return val;
}

void main()
{
    int num;
    printf("Enter the number");
    scanf("%d", &num);
    int sum = sumOfNatural(num);
    printf("The sum of natural number is :%d", sum);
}