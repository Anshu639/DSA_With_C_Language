#include <stdio.h>

// Define a structure for a rectangle
struct Rectangle
{
    char shape_type; // 'R' for rectangle
    float length;
    float width;
};

// Define a structure for a circle
struct Circle
{
    char shape_type; // 'C' for circle
    float radius;
};

// Define a union to store either a rectangle or a circle
union Shape
{
    char shape_type; // To determine the type of shape ('R' for rectangle, 'C' for circle)
    struct Rectangle rectangle;
    struct Circle circle;
};

int main()
{
    union Shape shape;

    // Store a rectangle in the union
    shape.shape_type = 'R';
    shape.rectangle.length = 5.0;
    shape.rectangle.width = 3.0;

    printf("Shape Type: %c\n", shape.shape_type);
    printf("Rectangle Length: %.2f\n", shape.rectangle.length);
    printf("Rectangle Width: %.2f\n", shape.rectangle.width);

    // Store a circle in the same union
    shape.shape_type = 'C';
    shape.circle.radius = 2.5;

    printf("Shape Type: %c\n", shape.shape_type);
    printf("Circle Radius: %.2f\n", shape.circle.radius);

    return 0;
}
