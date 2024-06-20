#include<stdio.h>
void main()
{
    int i,j,k,r1,c1,r2,c2;
    
    printf("enter number rows of first matrix: ");
    scanf("%d",&r1);
    printf("enter number columns of first matrix: ");
    scanf("%d",&c1); 

    int arr1[r1][c1];

    printf("enter the elements of first matrix :\n ");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("Enter arr[%d][%d] element : \n",i,j);
            scanf("%d",&arr1[i][j]);
        }
    } 

    printf("enter number rows of second matrix: ");
    scanf("%d",&r2);
    printf("enter number columns of second matrix: ");
    scanf("%d",&c2);
    

    int arr2[r2][c2];
        printf("enter the elements of second matrix :\n ");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("Enter arr[%d][%d] element : \n",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }

    printf("Fisrt Matrix :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }
   
    printf("Second Matrix :\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
           printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }
    
     int multi[r1][c2];

   if(c1!=r2)
   {
    printf("Matix multiplication not possible");
   }
   else
   {
     printf("Multiplication of two matrix : \n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                multi[i][j]=0;
                for(k=0;k<c1;k++)
                {
                    multi[i][j]+=arr1[i][k]*arr2[k][j];
                }
                printf("%d\t",multi[i][j]);
            }
            printf("\n");
        }
   }

}