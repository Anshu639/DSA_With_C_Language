#include<stdio.h>
void main()
{
    int arr[8]={10,20,30,40,50,60};
    int i;

    printf("Array is : \n");
    for(i=0;i<8;i++)
    {
        printf("%d \t",arr[i]);
    }

    printf("\n");

    
    for(i=8-1;i>=3;i--)
    {
        arr[i]=arr[i-1];
    }

    arr[3]=35;

    printf("After inserting array is : \n");
    for(i=0;i<8;i++)
    {
        printf("%d \t",arr[i]);
    }

    for(i=2;i<8;i++)
    {
        arr[i]=arr[i+1];
    }

    printf("\n");
    printf("After deleting array is : \n");
    for(i=0;i<7;i++)
    {
        printf("%d \t",arr[i]);
    }
}