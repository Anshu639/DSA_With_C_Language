#include <stdio.h>
float add(float num1, float num2)
{
    return num1 + num2;
}
float sub(float num1, float num2)
{
    return num1 - num2;
}
float mul(float num1, float num2)
{
    return num1 * num2;
}
float div(float num1, float num2)
{
    return num1 / num2;
}
int power(int base, int exponent)
{

    for (int i = 0; i <= exponent; i++)
    {
        base = base * i;
    }
    return base;
}

void main()
{
    int base, exponent;
    float num1, num2;
    printf("Enter the value of number 1  :");
    scanf("%f", &num1);
    printf("Enter the value of number 1  :");
    scanf("%f", &num2);
    printf("The additon of two number is %.2f\n", add(num1, num2));
    printf("The subtraction of two number is %.2f\n", sub(num1, num2));
    printf("The multiplication of two number is %.2f\n", mul(num1, num2));
    printf("The division of two number is %.2f\n", div(num1, num2));
    printf("Enter the value of base: ");
    scanf("%d", &base);
    printf("Enter the value of exponent: ");
    scanf("%d", &exponent);
    printf("The power  is %d\n", power(base, exponent));
}
