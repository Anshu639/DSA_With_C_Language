#include <stdio.h>

int main()
{
    int x1, x2, x3, y1, y2, y3;

    // User input for the coordinates of three points
    printf("Enter the value of x1 and y1: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the value of x2 and y2: ");
    scanf("%d %d", &x2, &y2);
    printf("Enter the value of x3 and y3: ");
    scanf("%d %d", &x3, &y3);

    // Calculate the value to check if the points are collinear
    int value = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);

    // Check if the value is zero to determine collinearity
    if (value == 0)
    {
        printf("Entered points are collinear"); // Points are collinear if the value is zero
    }
    else
    {
        printf("Entered points are not collinear"); // Points are not collinear if the value is not zero
    }

    return 0;
}

