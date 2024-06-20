//without argument with return value

#include<stdio.h>

int sum();

void main()
{
    printf("The sum is %d",sum());
}

int sum()
{
    int a,b,ans;   
    printf("Enter two numbers\n");  
    scanf("%d %d",&a,&b);   
    ans=a+b;

    return ans;

}