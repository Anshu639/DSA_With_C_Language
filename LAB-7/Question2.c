#include <stdio.h>
#include <stdlib.h>

// Function to allocate memory using malloc
int *allocateWithMalloc(int size)
{
    int *arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation with malloc failed.\n");
        exit(1);
    }
    return arr;
}

// Function to allocate memory using calloc
int *allocateWithCalloc(int size)
{
    int *arr = (int *)calloc(size, sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation with calloc failed.\n");
        exit(1);
    }
    return arr;
}

// Function to reallocate memory using realloc
int *reallocate(int *arr, int newSize)
{
    int *newArr = (int *)realloc(arr, newSize * sizeof(int));
    if (newArr == NULL)
    {
        printf("Memory reallocation with realloc failed.\n");
        free(arr); // Release the original memory
        exit(1);
    }
    return newArr;
}

// Function to print an array
void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int *dynamicArray = NULL;
    int size = 5;

    // Allocate memory using malloc
    dynamicArray = allocateWithMalloc(size);

    // Initialize the array
    for (int i = 0; i < size; i++)
    {
        dynamicArray[i] = i + 1;
    }

    printf("Array allocated with malloc: ");
    printArray(dynamicArray, size);

    // Reallocate memory using realloc
    size = 10;
    dynamicArray = reallocate(dynamicArray, size);

    // Initialize the additional elements
    for (int i = 5; i < size; i++)
    {
        dynamicArray[i] = i + 1;
    }

    printf("Array reallocated with realloc: ");
    printArray(dynamicArray, size);

    // Deallocate memory using free
    free(dynamicArray);
    dynamicArray = NULL;

    return 0;
}
