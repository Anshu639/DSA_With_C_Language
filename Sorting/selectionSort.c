#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num_elements = 10;
    int random_array[num_elements];

    for (int i = 0; i < num_elements; i++)
    {
        random_array[i] = rand() % 90 + 10;
    }

    printf("Original Array: ");
    for (int i = 0; i < num_elements; i++)
    {
        printf("%d\t", random_array[i]);
    }

    // Selection sort
    for (int i = 0; i < num_elements - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < num_elements; j++)
        {
            if (random_array[j] < random_array[min])
            {
                min = j;
            }
        }
        swap(&random_array[min], &random_array[i]);
    }

    printf("\nSorted Array: ");
    for (int i = 0; i < num_elements; i++)
    {
        printf("%d\t", random_array[i]);
    }

    return 0;
}