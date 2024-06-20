#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    printf("enter no of elements : ");
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));

    int *arr2,j=0;

    arr2=(int*) malloc(num * sizeof(int));

    for(int i= num-1;i>=0;i--)
    {
        arr2[j]=arr[i];
        j++;
    }

     for(i = 0; i < num; i++)
        printf("%d ", *(arr2 + i));

    return 0;
}