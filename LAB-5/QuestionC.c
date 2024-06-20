#include <stdio.h>

int main()
{
    int num;

    // Prompt the user to enter the size of the array
    printf("Enter the size of array: ");
    scanf("%d", &num);

    // Declare an integer array of the given size and a pointer to an integer
    int arr[num], *small;

    // Input elements into the array
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Initialize the 'small' pointer to point to the first element of the array
    small = &arr[0];

    // Find the smallest element in the array using pointer arithmetic
    for (int i = 0; i < num; i++)
    {
        if (*(arr + i) < *small)
            *small = *(arr + i);
    }

    // Print the smallest element in the array
    printf("Smallest element in the array is %d", *small);

    return 0;
}
