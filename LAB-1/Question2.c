#include <stdio.h>

int main()
{
    // Variable declarations to store the distances in various units
    float distance, miles, inches, centimeter, meter;

    // Prompt the user to enter the distance in kilometers
    printf("Enter the distance in km: ");
    scanf("%f", &distance); // Read the input from the user and store it in 'distance'

    // Convert the distance to miles, inches, centimeters, and meters
    miles = distance * 0.62137119;  // Conversion factor for kilometers to miles
    inches = distance * 39370.1;    // Conversion factor for kilometers to inches
    centimeter = distance * 100000; // Conversion factor for kilometers to centimeters
    meter = distance * 1000;        // Conversion factor for kilometers to meters

    // Print the converted distances to the console
    printf("Distance in centimeters: %f\n", centimeter);
    printf("Distance in inches: %f\n", inches);
    printf("Distance in miles: %f\n", miles);
    printf("Distance in meters: %f", meter);

    return 0; // Indicate successful program execution by returning 0
}
