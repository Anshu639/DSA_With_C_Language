#include <stdio.h>

int main()
{
    // Declare variables to store dimensions and perimeters
    int len1, len2, len3, wid1, wid2, wid3;
    int per1, per2, per3;

    // Input dimensions of Rectangle 1
    printf("Enter the length and breadth of Rectangle 1: ");
    scanf("%d %d", &len1, &wid1);

    // Input dimensions of Rectangle 2
    printf("Enter the length and breadth of Rectangle 2: ");
    scanf("%d %d", &len2, &wid2);

    // Input dimensions of Rectangle 3
    printf("Enter the length and breadth of Rectangle 3: ");
    scanf("%d %d", &len3, &wid3);

    // Calculate perimeters for each rectangle
    per1 = 2 * (len1 + wid1);
    per2 = 2 * (len2 + wid2);
    per3 = 2 * (len3 + wid3);

    // Compare perimeters using ternary operators and print results
    (per1 > per2 && per1 > per3) ? printf("Rectangle 1 has the greater perimeter\n") : (per2 > per3) ? printf("Rectangle 2 has the greater perimeter\n")
                                                                                                     : printf("Rectangle 3 has the greater perimeter\n");

    return 0; // Return 0 to indicate successful program execution
}
