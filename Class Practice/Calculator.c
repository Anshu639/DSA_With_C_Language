#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void addition()
{
    int num1, num2;
    printf("Enter two numbers for additon :");
    scanf("%d%d", &num1, &num2);
    printf("Addition of %d and %d is: %d\n\n", num1, num2, (num1 + num2));
}
void subtraction()
{
    int num1, num2;
    printf("Enter two numbers for subtraction :");
    scanf("%d%d", &num1, &num2);
    printf("Subtraction of %d and %d is: %d\n\n", num1, num2, (num1 - num2));
}
void multliplication()
{
    int num1, num2;
    printf("Enter two numbers for multiplication :");
    scanf("%d%d", &num1, &num2);
    printf("Multliplication of %d and %d is: %d\n\n", num1, num2, (num1 * num2));
}
void divison()
{
    int num1, num2;
    printf("Enter two numbers for division :");
    scanf("%d%d", &num1, &num2);
    printf("Division of %d and %d is: %d\n\n", num1, num2, (num1 / num2));
}
void modulas()
{
    int num1, num2;
    printf("Enter two numbers for modulas :");
    scanf("%d%d", &num1, &num2);
    printf("Moduloe of %d and %d is: %d\n\n", num1, num2, (num1 % num2));
}
void power()
{
    int base, exponent;
    printf("Enter base and its exponent for  power:");
    scanf("%d%d", &base, &exponent);
    int power = 1;
    for (int i = 1; i <= exponent; i++)
    {
        power = base * power;
    }
    printf("The power of %d and %d is: %d\n\n", base, exponent, power);
}
void square()
{
    int num;
    printf("Enter the numbers you want the square of :");
    scanf("%d", &num);
    double square = pow(num, 2);
    printf("The square of %d is %.2lf\n\n", num, square);
}
void cube()
{
    int num;
    printf("Enter the numbers you want the cube of :");
    scanf("%d", &num);
    double cube = pow(num, 3);
    printf("The cube of %d is %.2lf\n\n", num, cube);
}
void squareRoot()
{
    int num;
    printf("Enter the numbers you want the squareRoot of :");
    scanf("%d", &num);
    double squareRoot = sqrt(num);
    printf("The squareRoot of %d is %lf\n\n", num, squareRoot);
}
void loge()
{
    double num, loge;
    printf("Enter the numbers to the Know the base-e log of :");
    scanf("%lf", &num);
    loge = log(num);
    printf("The base-e log(%lf) is %lf\n\n", num, loge);
}
void logten()
{
    double num, loge;
    printf("Enter the numbers to the Know the base-10 log of :");
    scanf("%lf", &num);
    loge = log10(num);
    printf("The base-10 log(%lf) is %lf\n\n", num, loge);
}
void exponent()
{
    double num, expo;
    printf("Enter the numbers to the Know the Exponential of :");
    scanf("%lf", &num);
    expo = exp(num);
    printf("The Exponential of %lf is %lf\n\n", num, expo);
}
void facto()
{
    int num, facto;
    printf("Enter the number you want the factorial of :");
    scanf("%d", &num);
    facto = num;
    for (int i = num - 1; i > 0; i--)
    {
        facto *= i;
    }
    printf("The Factorial of %d is %d\n\n", num, facto);
}
void main()
{
    int ch;
    while (1)
    {
        printf("\t\tWelcome to the scientific calculator!!\n\n");
        printf("******* Press 0 to quit the program ********\nEnter 1 for Addition\nEnter 2 for Subtraction\nEnter 3 for Multliplication\nEnter 4 for Divison\nEnter 5 for Modulas\nEnter 6 for Power\nEnter 7 for Square\nEnter 8 for Cube\nEnter 9 for SquareRoot\nEnter 10 for log base-e\nEnter 11 for log base-10\nEnter 12 for Exponential\nEnter 13 for Factorial\n ");
        printf("\nEnter the operation you want to do :");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            addition();
            break;
        case 2:

            subtraction();
            break;
        case 3:

            multliplication();
            break;
        case 4:
            divison();
            break;
        case 5:
            modulas();
            break;
        case 6:
            power();
            break;
        case 7:
            square();
            break;
        case 8:
            cube();
            break;
        case 9:
            squareRoot();
            break;
        case 10:
            loge();
            break;
        case 11:
            logten();
            break;
        case 12:
            exponent();
            break;
        case 13:
            facto();
            break;
        case 0:
            exit(0);
        default:
            printf("Please select right option");
        }
    }
}