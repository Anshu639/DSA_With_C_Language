#include<stdio.h>

void main()
{
    int no,i;

    printf("Enter a number");
    scanf("%d",&no);

    for(i=0;i<no;i++)
    {
        printf("%d\t",fib(i));
    }

}

int fib(int i)
{
    if(i==0)
        return 0;
    else if(i==1)
        return 1;
    else
        return fib(i-1)+fib(i-2);
}