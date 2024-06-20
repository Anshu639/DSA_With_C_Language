#include <stdio.h>

// Function to calculate the Fibonacci sequence
int fibonacci(int num)
{
    if (num == 0 || num == 1) // Base cases: Fibonacci of 0 and 1 is 1
    {
        return 1;
    }
    else
    {
        // Recursive step: Fibonacci of num is the sum of the previous two Fibonacci numbers
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}
// Main function
void main()
{
    int num;
    printf("Enter the number: "); // Prompt user to input a number
    scanf("%d", &num);            // Read the input number

    printf("Fibonacci sequence up to %d:\n", num);
    for (int i = 0; i <= num; i++)
    {
        printf("%d, ", fibonacci(i)); // Print Fibonacci sequence up to the given number
    }
}
