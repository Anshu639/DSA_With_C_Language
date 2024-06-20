#include <stdio.h>

// Function to convert a decimal number to binary representation
void numberToBinary(int num)
{
    int a[10], i, j;

    // Convert decimal number to binary by repeatedly dividing by 2
    for (i = 0; num > 0; i++)
    {
        a[i] = num % 2; // Store the remainder (binary digit)
        num = num / 2;  // Update num by dividing it by 2
    }

    printf("\nBinary representation of the given number is: ");
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", a[j]); // Print the binary digits in reverse order
    }
}

// Function to choose the desired conversion format
void convert(int number, int format)
{
    switch (format)
    {
    case 1:
        printf("Binary representation of %d is: ", number);
        numberToBinary(number); // Call function to convert to binary
        break;
    default:
        printf("Invalid format");
    }
}

int main()
{
    int num, format;

    printf("Enter the number: ");
    scanf("%d", &num); // Read the input number from the user

    printf("Enter the format:\nPress 1 for binary: ");
    scanf("%d", &format); // Read the desired format from the user

    convert(num, format); // Call the function to convert and print the result

    return 0; // Indicate successful execution of the program
}
