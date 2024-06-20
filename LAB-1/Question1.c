#include <stdio.h>

int main()
{
    // Variable declarations
    int basic_salary;   // Stores the basic salary as an integer
    float gross_salary, DA, HRA;   // Stores gross salary, Dearness Allowance (DA), and House Rent Allowance (HRA) as floating-point numbers

    // Prompt the user to enter the basic salary
    printf("Enter the basic salary: ");
    scanf("%d", &basic_salary);   // Read the input from the user and store it in 'basic_salary' using the address-of (&) operator

    // Calculate the Dearness Allowance (DA) and House Rent Allowance (HRA) based on the basic salary
    DA = basic_salary * 40 / 100;   // DA is 40% of the basic salary
    HRA = basic_salary * 20 / 100;  // HRA is 20% of the basic salary

    // Calculate the gross salary by adding the basic salary, DA, and HRA
    gross_salary = basic_salary + DA + HRA;

    // Print the calculated values to the console
    printf("\n Basic Salary: %.2f", basic_salary);    // %.2f formats the float with two decimal places
    printf("\n Dearness Allowance: %.2f", DA);
    printf("\n House Rent Allowance: %.2f", HRA);
    printf("\n Gross Salary: %.2f", gross_salary);

    return 0;   // Indicate successful program execution by returning 0
}
