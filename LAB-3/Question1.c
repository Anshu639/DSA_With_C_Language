#include <stdio.h>

int main()
{
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;
    float num;
    char user_choice = 'y';

    while (user_choice == 'y' || user_choice == 'Y')
    {
        printf("Enter a number: ");
        scanf("%f", &num);

        if (num > 0)
        {
            positive_count++;
        }
        else if (num < 0)
        {
            negative_count++;
        }
        else
        {
            zero_count++;
        }

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &user_choice);
    }

    printf("Count of positive numbers: %d\n", positive_count);
    printf("Count of negative numbers: %d\n", negative_count);
    printf("Count of zeros: %d\n", zero_count);

    return 0;
}
