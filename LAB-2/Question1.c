#include <stdio.h>

void main()
{
    int side1, side2, side3;

    // User input for the sides of the triangle
    printf("Enter the side1 of the triangle: ");
    scanf("%d", &side1);
    printf("Enter the side2 of the triangle: ");
    scanf("%d", &side2);
    printf("Enter the side3 of the triangle: ");
    scanf("%d", &side3);

    // Checking for different types of triangles
    if (side1 == side2 && side2 == side3)
    {
        printf("Equilateral Triangle"); // All sides are equal
    }
    else if (side1 == side2 || side2 == side3 || side3 == side1)
    {
        printf("Isosceles Triangle"); // Two sides are equal
    }
    else if (side1 * side1 + side2 * side2 == side3 * side3 || side2 * side2 + side3 * side3 == side1 * side1 || side3 * side3 + side1 * side1 == side2 * side2)
    {
        printf("Right Angle Triangle"); // Satisfies Pythagorean theorem
    }
    else if (side1 != side2 && side2 != side3 && side3 != side1)
    {
        printf("Scalene Triangle"); // All sides are different
    }
    else
    {
        printf("Invalid Triangle"); // Invalid input or sides cannot form a triangle
    }
}
