#include<stdio.h>

int main()
{
    int r,c,j,i;

    printf("enter number of rows : ");
    scanf("%d",&r);
    
    printf("enter number of columns : ");
    scanf("%d",&c);

    
    int arr[r][c];
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter arr[%d][%d] element : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }


    printf("\nelements of array are : \n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    return 0;

}