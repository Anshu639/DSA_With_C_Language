#include <stdio.h>
void swap(int a, int b);
int main()
{
    int num1, num2;
    printf("Enter the value of num1:\n");
    scanf("%d", &num1);
    printf("Enter the value of num2:\n");
    scanf("%d", &num2);
    swap(num1, num2);
    printf("The value of num1=%d and num2=%d", num1, num2);
    return 0;
}
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("The value of num 1 is%d\n", a);
    printf("The value of num 1 is%d\n", b);
}