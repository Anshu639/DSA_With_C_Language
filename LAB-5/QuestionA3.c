#include <stdio.h>

// Function to print a 3x3 matrix
void printMatrix(double A[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%.2f\t", A[i][j]);
        }
        printf("\n");
    }
}

// Global variable to store the determinant
double det = 0;

// Function to calculate the inverse of a 3x3 matrix
void inverseMatrix(double A[3][3], double A_inv[3][3])
{
    // Calculate the determinant of A using the formula for a 3x3 matrix
    for (int i = 0; i < 3; i++)
    {
        det += (A[0][i] * (A[1][(i + 1) % 3] * A[2][(i + 2) % 3] - A[1][(i + 2) % 3] * A[2][(i + 1) % 3]));
    }

    // Check if the matrix is singular (determinant is zero)
    if (det == 0)
    {
        printf("Matrix is singular. Inverse does not exist.\n");
        return;
    }

    // Calculate the inverse of A using the adjugate and determinant
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            A_inv[i][j] = ((A[(j + 1) % 3][(i + 1) % 3] * A[(j + 2) % 3][(i + 2) % 3]) -
                           (A[(j + 1) % 3][(i + 2) % 3] * A[(j + 2) % 3][(i + 1) % 3])) /
                          det;
        }
    }
}

int main()
{
    double A[3][3] = {{2.0, 3.0, 4.0},
                      {1.0, 5.0, 6.0},
                      {7.0, 8.0, 9.0}};

    double A_inv[3][3];

    printf("Original Matrix A:\n");
    printMatrix(A);

    inverseMatrix(A, A_inv);

    // Check if the determinant is nonzero (inverse exists)
    if (det != 0)
    {
        printf("\nInverse Matrix A_inv:\n");
        printMatrix(A_inv);
    }

    return 0;
}
