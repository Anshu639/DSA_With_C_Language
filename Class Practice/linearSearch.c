#include <stdio.h>
void main()
{
    int arr[5];
    int num;
    printf("Enter the number you want to search ");
    scanf("%d", &num);
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d element  : ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == num)
        {
            printf("Element present in the array index of %d ", i);
        }
    }
}