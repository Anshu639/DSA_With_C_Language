//with argument without return value

#include<stdio.h>

void sum(int ,int );

void main()
{
    int n1,n2;   
    printf("\nEnter two numbers\n");  
    scanf("%d %d",&n1,&n2);  
    
    sum(n1,n2); 
    
}

void sum(int a,int b)
{ 
    printf("The sum is %d\n",a+b);
}