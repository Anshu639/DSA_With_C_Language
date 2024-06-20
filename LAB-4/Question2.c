#include <stdio.h>

// Function to swap the values of two numbers using pointers
void swapTwoNumbers(int *num1, int *num2)
{
    // Swapping using arithmetic operations
    *num1 = *num1 + *num2; // Add num1 and num2 and store in num1
    *num2 = *num1 - *num2; // Subtract num2 from the new num1 and store in num2
    *num1 = *num1 - *num2; // Subtract the new num2 from the new num1 and store in num1
}

int main()
{
    int num1, num2;
    printf("Enter the value of num1: ");
    scanf("%d", &num1); // Read the value of num1 from the user
    printf("Enter the value of num2: ");
    scanf("%d", &num2); // Read the value of num2 from the user

    // Without using functions
    printf("The value before swapping is %d, %d\n", num1, num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("The value after swapping is %d, %d", num1, num2);

    // Calling function to swap two numbers using pointers
    printf("The value before swapping is %d, %d\n", num1, num2);
    swapTwoNumbers(&num1, &num2); // Call the swap function
    printf("The value after swapping  is %d, %d", num1, num2);

    return 0; // Indicate successful execution of the program
}
