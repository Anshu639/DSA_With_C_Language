#include <stdio.h>
int main()
{
    char maritial_status, gender;
    int age;
    printf("Enter your age");
    scanf("%d", &age);
    printf("Enter your gender");
    scanf("%c ", &gender);
    printf("Are you married(Y/N)");
    scanf(" %c ", &maritial_status);
    // scanf("%d %c %c", &age, &gender, &maritial_status);
    if (maritial_status == 'Y' || 'y')
    {
        printf("You will be insured");
    }
    else if (maritial_status == 'N' || 'n')
    {
        if (gender == 'M' && age > 30)
        {
            printf("You will be insured");
        }
        else if (gender == 'F' && age > 25)
        {
            printf("You will be insured");
        }
        else
        {
            printf("You will Not be insured");
        }
    }
    else
    {
        printf("You will Not be insured");
    }
}