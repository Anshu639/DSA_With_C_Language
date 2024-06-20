//without argument without return value

#include<stdio.h>

void sum();

void main()
{
    sum();
}

void sum()
{
    int a,b;   
    printf("\nEnter two numbers");  
    scanf("%d %d",&a,&b);   
    printf("The sum is %d",a+b); 
}