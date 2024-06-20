#include <stdio.h>
#include <math.h>
int power(int num, int base)
{
    return pow(num, base);
}
void main()
{
    int num, base;
    printf("Enter the number :");
    scanf("%d", &num);
    printf("Enter the number :");
    scanf("%d", &base);
    int result = power(num, base);
    printf("%d", result);
}