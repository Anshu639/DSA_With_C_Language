// write a c program for calculating sum of first n natrural numbers without functions
// write a c program using function to calculate factorail of a given number

#include<stdio.h>

void main()
{
    
        int n,ans;
        printf("Enter number ");
        scanf("%d",&n);

        ans=n*(n+1)/2;

        printf("Sum of %d natural number is : %d",n,ans);

        int fact=1,i,no;

        printf("\n\n\nEnter number ");
        scanf("%d",&no);

        for(i=1;i<=no;i++)
        {
            fact=fact*i;
        }

        printf("Factorial of %d  is : %d",no,fact);

}