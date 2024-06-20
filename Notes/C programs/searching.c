#include<stdio.h>
void main()
{
    int arr[10],n,i,value,count;

    printf("\nEnter number of elements you want to enter in an array :");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter %d element : ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nArray is : \n");
    for(i=0;i<n;i++)
    {
        printf("%d \t",arr[i]);
    }


    printf("\n\nEnter the value to want to search : ");
    scanf("%d",&value);

    for(i=0;i<n;i++)
    {
        if(arr[i]==value)
        {
            count=1;
            break;
        }        
    }

    if(count==1)
        printf("\nValue found at %d position !",i+1);

    else
        printf("Value doesnt exist in the array");
        
    printf("\n");
}
