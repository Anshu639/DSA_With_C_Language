#include <stdio.h>

int main()
{
    // Variable declarations to store the length and breadth
    int length, bredth;
    // Variables to store intermediate calculations for length and breadth
    float l1, l2, l3, l4, l5, l6, l7, l8;
    float b1, b2, b3, b4, b5, b6, b7, b8;

    // Prompt the user to enter the length and breadth
    printf("Please enter the length and bredth: ");
    scanf("%d %d", &length, &bredth); // Read the input from the user and store it in 'length' and 'bredth'

    // Calculate the intermediate lengths (l1 to l8) and breadths (b1 to b8) using halving method
    l1 = length / 2;
    l2 = l1 / 2;
    l3 = l2 / 2;
    l4 = l3 / 2;
    l5 = l4 / 2;
    l6 = l5 / 2;
    l7 = l6 / 2;
    l8 = l7 / 2;
    b1 = bredth / 2;
    b2 = b1 / 2;
    b3 = b2 / 2;
    b4 = b3 / 2;
    b5 = b4 / 2;
    b6 = b5 / 2;
    b7 = b6 / 2;
    b8 = b7 / 2;

    // Print the calculated values (A0 to A8) to the console
    printf("A0 - %f %f\n", l1, b1);
    printf("A1 - %f %f\n", l1, b1);
    printf("A2 - %f %f\n", l2, b2);
    printf("A3 - %f %f\n", l3, b3);
    printf("A4 - %f %f\n", l4, b4);
    printf("A5 - %f %f\n", l5, b5);
    printf("A6 - %f %f\n", l6, b6);
    printf("A7 - %f %f\n", l7, b7);
    printf("A8 - %f %f\n", l8, b8);

    return 0; // Indicate successful program execution by returning 0
}
