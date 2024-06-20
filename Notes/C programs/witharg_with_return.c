//with argument with return value

#include<stdio.h>

int sum(int ,int );

void main()
{
    int n1,n2;   
    printf("\nEnter two numbers\n");  
    scanf("%d %d",&n1,&n2); 

    printf("The sum is %d\n",sum(n1,n2));   
}

int sum(int a,int b)
{ 
    return a+b;
}