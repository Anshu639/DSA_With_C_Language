#include<stdio.h>
void main()
{
    int s,i,j,k;
    
    printf("enter size : ");
    scanf("%d",&s);
    

    int arr1[s][s];

    printf("enter the elements of first array :\n ");
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {
            printf("Enter arr[%d][%d] element : \n",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }

     int arr2[s][s];

    printf("enter the elements of second array : \n");
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {
            printf("Enter arr[%d][%d] element : \n",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }


     int multi[s][s];
    printf("Multiplication of two matrix\n");

    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {
            multi[i][j]=0;
            for(k=0;k<s;k++)
            {
                multi[i][j]+=arr1[i][k]*arr2[k][j];
            }
            printf("%d\t",multi[i][j]);
        }
        printf("\n");
    }
}