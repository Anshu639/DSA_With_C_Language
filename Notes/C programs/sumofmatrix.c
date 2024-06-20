// write a c program for addition of two matrixes1q
#include<stdio.h>
void main()
{
    int arr1[3][3],arr2[3][3],sum[3][3], i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter value for arr[%d][%d]:", i, j);
            scanf("%d",&arr1[i][j]);
        }
    }

     /*printf("Array one is:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }*/

     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter value for array2[%d][%d]:", i, j);
            scanf("%d",&arr2[i][j]);
        }
    }

     /*printf("Array two is:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }*/

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }

     printf("Sum of array is : \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

}