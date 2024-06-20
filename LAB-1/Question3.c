#include <stdio.h>

void main()
{
    // Variable declarations to store marks and calculations
    int subject1, subject2, subject3, subject4, subject5, total;
    float percentage;

    // Prompt the user to enter the marks for each subject
    printf("Enter the marks of Subject1: ");
    scanf("%d", &subject1);

    printf("Enter the marks of Subject2: ");
    scanf("%d", &subject2);

    printf("Enter the marks of Subject3: ");
    scanf("%d", &subject3);

    printf("Enter the marks of Subject4: ");
    scanf("%d", &subject4);

    printf("Enter the marks of Subject5: ");
    scanf("%d", &subject5);

    // Calculate the total marks
    total = subject1 + subject2 + subject3 + subject4 + subject5;

    // Calculate the percentage by dividing the total marks by the number of subjects (5 in this case)
    percentage = total / 5;

    // Print the aggregate marks and percentage marks to the console
    printf("\nAggregate marks: %d", total);
    printf("\nPercentage marks: %0.2f %%", percentage);
}
