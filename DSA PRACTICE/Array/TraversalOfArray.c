#include <stdio.h>
int main()
{
    int arr[5];
    printf("Enter the elements in the array:-\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe entered array is : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ,", arr[i]);
    }
    return 0;
}