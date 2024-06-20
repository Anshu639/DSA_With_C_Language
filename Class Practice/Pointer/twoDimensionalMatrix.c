#include <stdio.h>

void get_matrix_input(int rows, int cols, int *matrix)
{
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter element at position (%d,%d): ", i + 1, j + 1);
            scanf("%d", (matrix + i * cols + j));
        }
    }
}

void circular_right_shift_rows(int rows, int cols, int *matrix, int shift)
{

    for (int s = 0; s < shift; s++)
    {
        for (int j = 0; j < cols; j++)
        {
            int temp = matrix[(rows - 1) * cols + j];

            for (int i = rows - 1; i > 0; i--)
            {
                int current_index = i * cols + j;
                int prev_index = (i - 1) * cols + j;
                matrix[current_index] = matrix[prev_index];
            }

            matrix[j] = temp;
        }
    }
}

void circular_right_shift_columns(int rows, int cols, int *matrix, int shift)
{
    for (int s = 0; s < shift; s++)
    {
        for (int i = 0; i < rows; i++)
        {
            int temp = matrix[i * cols + cols - 1];

            for (int j = cols - 1; j > 0; j--)
            {
                int current_index = i * cols + j;
                int prev_index = i * cols + j - 1;
                matrix[current_index] = matrix[prev_index];
            }

            matrix[i * cols] = temp;
            z
        }
    }
}

void print_matrix(int rows, int cols, int *matrix)
{
    printf("Matrix elements:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", *((int *)matrix + i * cols + j));
        }
        printf("\n");
    }
}

int main()
{
    int rows, cols, shift;
    int matrix[10][10];
    int choice;

    do
    {
        printf("\nMenu:\n");
        printf("1. Enter Matrix\n");
        printf("2. Circular  Shift Rows  Up\n");
        printf("3. Circular Right Shift Columns\n");
        printf("4. Print Matrix\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the number of rows in the matrix: ");
            scanf("%d", &rows);
            printf("Enter the number of columns in the matrix: ");
            scanf("%d", &cols);
            get_matrix_input(rows, cols, (int *)matrix);
            break;

        case 2:
            if (rows == 0 || cols == 0)
            {
                printf("Matrix has not been initialized.\n");
            }
            else
            {
                printf("Enter the number of positions to shift right (rows): ");
                scanf("%d", &shift);
                circular_right_shift_rows(rows, cols, (int *)matrix, shift);
                printf("Matrix after circular right shift of rows:\n");
                print_matrix(rows, cols, (int *)matrix);
            }
            break;

        case 3:
            if (rows == 0 || cols == 0)
            {
                printf("Matrix has not been initialized.\n");
            }
            else
            {
                printf("Enter the number of positions to shift right (columns): ");
                scanf("%d", &shift);
                circular_right_shift_columns(rows, cols, (int *)matrix, shift);
                printf("Matrix after circular right shift of columns:\n");
                print_matrix(rows, cols, (int *)matrix);
            }
            break;

        case 4:
            if (rows == 0 || cols == 0)
            {
                printf("Matrix has not been initialized.\n");
            }
            else
            {
                printf("Matrix elements:\n");
                print_matrix(rows, cols, (int *)matrix);
            }
            break;

        case 5:
            printf("Exiting program.\n");
            break;

        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}