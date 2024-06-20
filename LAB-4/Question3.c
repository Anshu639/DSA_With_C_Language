#include <stdio.h>

// Function to find and print prime factors of a number
void primeFactors(int num)
{
    for (int count = 2; num > 1; count++)
    {
        while (num % count == 0)
        {
            printf("%2d ,", count); // Print the prime factor
            num = num / count;      // Reduce the number by dividing it by the prime factor
        }
    }
}

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num); // Read the input number from the user

    printf("Prime factors of %d are: ", num);
    primeFactors(num); // Call the function to find and print prime factors

    return 0; // Indicate successful execution of the program
}
