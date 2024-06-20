#include <stdio.h>
#include <math.h>
int sum(int, int);
int sub(int, int);
int Mul(int, int);
int div(int, int);
int mod(int, int);
int power(int, int);

int main()
{
    char sym[10];
    printf("Enter any operator(+,_,*,/,%, p)");
    scanf("%s", &sym[10]);
    int num1, num2, num3;
    printf("Enter Two Numbers(For power enter number then power):");
    scanf("%d %d", &num1, &num2);

    switch (sym[10])
    {
    case '+':
        num3 = sum(num1, num2);
        printf("%d", num3);
        break;
    case '-':
        num3 = sub(num1, num2);
        printf("%d", num3);
        break;
    case '*':
        num3 = Mul(num1, num2);
        printf("%d", num3);
        break;
    case '/':
        num3 = div(num1, num2);
        printf("%d", num3);
        break;
    case '%':
        num3 = mod(num1, num2);
        printf("%d", num3);
        break;
    case 'p':
        num3 = power(num1, num2);
        printf("%d", num3);
        break;
    default:
        printf("Enter valid operation");
        break;
    }
}
int sum(int a, int b)
{
    int c = a + b;
    return c;
}
int sub(int a, int b)
{
    int c = a - b;
    return c;
}
int Mul(int a, int b)
{
    int c = a * b;
    return c;
}
int div(int a, int b)
{
    int c = a / b;
    return c;
}
int mod(int a, int b)
{
    int c = a % b;
    return c;
}
int power(int a, int b)
{
    int c = 1;
    for (int i = 1; i <= b; i++)
    {
        c = a * c;
    }
    return c;
}