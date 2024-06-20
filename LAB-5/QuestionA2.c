#include <stdio.h>
#include <stdbool.h>

void main()
{
    int a[3][3], i, j;
    bool isSymmetric = true;

    // Input values for the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Display the elements of the matrix
    printf("The elements of the matrix are:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Display the transpose of the matrix
    printf("Transpose of the matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }

    // Check if the matrix is symmetric
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] != a[j][i])
            {
                isSymmetric = false;
                break; // Exit the loop as soon as a non-symmetric element is found
            }
        }
    }

    // Check and display if the matrix is symmetric or not
    if (isSymmetric)
    {
        printf("Matrix is symmetric.\n");
    }
    else
    {
        printf("Matrix isn't symmetric.\n");
    }
}
