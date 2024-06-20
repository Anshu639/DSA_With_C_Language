#include <stdio.h>
void printMatrix(int arr[4][4], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }
}
void enterElements(int arr[4][4], int size)
{
    printf("Enter elements for a %dx%d matrix:\n", size, size);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}
void diagonalElements(int arr[4][4], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j)
            {
                arr[i][j] = 0;
            }
            else if (i + j == size - 1)
            {
                arr[i][j] = 0;
            }
        }
    }
}
int main()
{
    int size;
    while (1)
    {
        printf("Enter size of square matrix(max 4): ");
        scanf("%d", &size);
        if (size > 4 || size < 1)
        {
            continue;
        }
        else
        {
            break;
        }
    }
    int matrix[size][size];
    enterElements(matrix, size);
    printMatrix(matrix, size);
    diagonalElements(matrix, size);
    printMatrix(matrix, size);
    return 0;
}