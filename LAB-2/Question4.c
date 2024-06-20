#include <stdio.h>
void main()
{
    int year, daysInYear, daysOfName;
    printf("Enter the year :");
    scanf("%d", &year);
    daysInYear = year * 365;
    daysOfName = daysInYear % 7;
    if (daysOfName == 1)

        printf("Monday");

    else if (daysOfName == 2)

        printf("Tuesday");

    else if (daysOfName == 3)

        printf("Wednesday");

    else if (daysOfName == 4)

        printf("Thrusday");

    else if (daysOfName == 5)

        printf("Friday");

    else if (daysOfName == 6)

        printf("Saturday");

    else if (daysOfName == 0)

        printf("Sunday");

    else

        printf("Invalid day");
}