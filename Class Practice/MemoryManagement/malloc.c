#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int i, n;
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    printf("Entered no is %d", n);
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memeory not allocated\n");
        exit(0);
    }
    else
    {
        printf("Memory is allocated\n");
        for (i = 0; i < n; i++)
        {
            ptr[i] = i;
        }
        printf("Elemets in the array are:\n");
        for (i = 0; i < n; i++)
        {
            printf("%d", ptr[i]);
        }
    }
    return 0;
}