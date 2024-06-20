#include <stdio.h>

// Function to modify the array elements by multiplying them by 3
void modify(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] *= 3; // Multiply each element by 3
    }
}

int main()
{
    int arr[10]; // Initialize an integer array of 10 elements

    // Initialize the array elements in main()
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Call the modify function to multiply each element by 3
    modify(arr, 10);

    // Print the modified array elements in main()
    printf("Modified array elements:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
