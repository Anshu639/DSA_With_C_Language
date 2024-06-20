#include <stdio.h>

int main()
{
    // Define and initialize the first array (arr1)
    int arr1[] = {5, 2, 9};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    // Define and initialize the second array (arr2)
    int arr2[] = {7, 1, 3};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    // Calculate the size of the merged array
    int mergedSize = size1 + size2;

    // Create an array to store the merged elements
    int mergedArray[mergedSize];

    // Copy elements from arr1 and arr2 to mergedArray
    for (int i = 0; i < size1; i++)
    {
        mergedArray[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++)
    {
        mergedArray[size1 + i] = arr2[i];
    }

    // Sort the merged array using bubble sort
    for (int i = 0; i < mergedSize - 1; i++)
    {
        for (int j = 0; j < mergedSize - i - 1; j++)
        {
            if (mergedArray[j] > mergedArray[j + 1])
            {
                // Swap elements if they are in the wrong order
                int temp = mergedArray[j];
                mergedArray[j] = mergedArray[j + 1];
                mergedArray[j + 1] = temp;
            }
        }
    }

    // Print the sorted merged array
    printf("Merged and sorted array:\n");
    for (int i = 0; i < mergedSize; i++)
    {
        printf("%d ", mergedArray[i]);
    }

    return 0;
}
