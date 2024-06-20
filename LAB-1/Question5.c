#include <stdio.h>

int main()
{
    // Variable declarations to store the measurements and calculations
    float length, bredth, radius, areaOfCircle, circumference_Circle, areaOfRect, perimeterOfRectangle;

    // For rectangle
    printf("Enter the length of rectangle: ");
    scanf("%f", &length); // Read the length of the rectangle from the user

    printf("Enter the breadth of rectangle: ");
    scanf("%f", &bredth); // Read the breadth of the rectangle from the user

    // For circle
    printf("Enter the radius of circle: ");
    scanf("%f", &radius); // Read the radius of the circle from the user

    // Calculate area & perimeter of the rectangle...
    areaOfRect = length * bredth;                 // Area of Rectangle = Length x Breadth
    perimeterOfRectangle = 2 * (length + bredth); // Perimeter of Rectangle = 2 * (Length + Breadth)

    // Calculate area & circumference of the circle...
    areaOfCircle = 3.14 * radius * radius;    // Area of Circle = Pi * r^2 where Pi = 3.14
    circumference_Circle = 2 * 3.14 * radius; // Circumference of Circle = 2 * Pi * r

    // Print the calculated values to the console
    printf("\nThe area of the rectangle: %0.2f", areaOfRect);
    printf("\nThe perimeter of the rectangle: %.2f", perimeterOfRectangle);
    printf("\n\nThe area of the circle: %.2f", areaOfCircle);
    printf("\nThe circumference of the circle: %.2f", circumference_Circle);

    return 0; // Indicate successful program execution by returning 0
}
