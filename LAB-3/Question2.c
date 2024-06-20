#include <stdio.h>
void main()
{
    //* By using For loop

    // int number;
    // printf("Enter the number :");
    // scanf("%d", &number);
    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("%d x %d = %d\n", number, i, number * i);
    // }

    //*By using while loop

    // int number;
    // printf("Enter the number :");
    // scanf("%d", &number);
    // int i = 1;
    // while (i <= 10)
    // {
    //     printf("%d x %d = %d\n", number, i, number * i);
    //     i++;
    // }

    //*By using do while loop

    int number;
    printf("Enter the number :");
    scanf("%d", &number);
    int i = 1;
    do
    {
        printf("%d x %d = %d\n", number, i, number * i);
        i++;
    } while (i <= 10);
}