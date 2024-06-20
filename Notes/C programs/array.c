#include<stdio.h>

void main()
{
    int no,i,arr[10],sum=0;
    printf("enter the number of students");
    scanf("%d",&no);

    for(i=0;i<no;i++)
    {
        printf("enter marks of student %d :\n",i+1);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("Sum=%d",sum);
}