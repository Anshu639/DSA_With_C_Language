#include <stdio.h>
#include <limits.h> 

  

int main()
{
    int size, i;
    int max1, max2;

    printf("Enter size of the array (1-1000): ");
    scanf("%d", &size);

    int arr[size];

    for(i=0; i<size; i++)
    {
    printf("Enter %d elements in the array: ",i+1);
        scanf("%d", &arr[i]);
    }

    max1 = max2 = 0;

    for(i=0; i<size; i++)
    {
        if(arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }

    printf("Second largest = %d", max2);

    return 0;
}