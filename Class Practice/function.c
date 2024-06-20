#include <stdio.h>
int greaterOfThree(int num1, int num2, int num3)
{
    return (num1 > num2 && num1 > num3 ? num1 : num2 > num1 && num2 > num3 ? num2
                                                                           : num3);
}
void main()
{
    int num1, num2, num3;
    printf("Enter the value of num1 :");
    scanf("%d", &num1);
    printf("Enter the value of num2 :");
    scanf("%d", &num2);
    printf("Enter the value of num3 :");
    scanf("%d", &num3);
    int c = greaterOfThree(num1, num2, num3);

    printf("%d", c);
}
