#include <stdio.h>

int main()
{
    float height, weight, bmi;

    // User input for weight and height
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);
    printf("Enter your height in meters: ");
    scanf("%f", &height);

    // Calculate BMI
    bmi = weight / (height * height);

    // Display BMI value
    printf("Your BMI is: %.2f\n", bmi);

    // Categorize BMI into different groups
    if (bmi < 15.0)
        printf("Starvation\n"); // BMI less than 15
    else if (bmi >= 15.0 && bmi <= 17.5)
        printf("Anorexic\n"); // BMI between 15.0 and 17.5
    else if (bmi >= 17.6 && bmi <= 18.5)
        printf("Underweight\n"); // BMI between 17.6 and 18.5
    else if (bmi >= 18.6 && bmi <= 24.9)
        printf("Ideal\n"); // BMI between 18.6 and 24.9
    else if (bmi >= 25 && bmi <= 25.9)
        printf("Overweight\n"); // BMI between 25 and 25.9
    else if (bmi >= 30 && bmi <= 39.9)
        printf("Obese\n"); // BMI between 30 and 39.9
    else
        printf("Morbidity Obese\n"); // BMI greater than or equal to 40

    return 0; // Return 0 to indicate successful program execution
}
