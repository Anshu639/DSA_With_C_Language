#include <stdio.h>

int main()
{
    // Variable declarations to store temperature values
    float fahrenheit, centigrade;

    // Prompt the user to enter the temperature in Fahrenheit
    printf("Enter Temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit); // Read the input from the user and store it in 'fahrenheit' using the address-of (&) operator

    // Convert Fahrenheit to Centigrade (Celsius)
    centigrade = (fahrenheit - 32) * 5 / 9;

    // Print the temperature in Centigrade (Celsius) to the console
    printf("The Temperature in Centigrade Degree: %.2f", centigrade);

    return 0; // Indicate successful program execution by returning 0
}
