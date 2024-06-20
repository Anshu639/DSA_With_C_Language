#include <stdio.h>

void display_arr(int arr[4][5])
{
    printf("Array:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }
}

void shift_right(int arr[4][5], int shift)
{
    for (int s = 0; s < shift; s++)
    {
        int temp = arr[0][4];
        for (int i = 0; i < 4; i++)
        {
            for (int j = 4; j > 0; j--)
            {
                arr[i][j] = arr[i][j - 1];
            }
        }
        arr[0][0] = temp;
    }
}

int main()
{
    int arr[4][5];

    printf("Enter elements for a 4x5 array:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int num_shifts_col, num_shifts_row;
    char repeat;

    do
    {

        display_arr(arr);

        printf("Enter the number of column shifts: ");
        scanf("%d", &num_shifts_col);

        shift_right(arr, num_shifts_col);

        display_arr(arr);

        printf("Enter the number of row shifts: ");
        scanf("%d", &num_shifts_row);

        for (int s = 0; s < num_shifts_row; s++)
        {
            int temp[5];
            for (int j = 0; j < 5; j++)
            {
                temp[j] = arr[3][j];
            }
            for (int i = 3; i > 0; i--)
            {
                for (int j = 0; j < 5; j++)
                {
                    arr[i][j] = arr[i - 1][j];
                }
            }
            for (int j = 0; j < 5; j++)
            {
                arr[0][j] = temp[j];
            }
        }

        display_arr(arr);

        printf("Do you want to repeat the operation? (y/n): ");
        scanf(" %c", &repeat);

    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}