#include<stdio.h>
void main()
{
    int no1,no2;

    printf("Enter first number : ");
    scanf("%d",&no1);
    
    printf("Enter second number : ");
    scanf("%d",&no2);

    printf("Using function by value : \n");
    printf("\tBefore swapping : \n");
    printf("\tnumber 1 : %d\n\tnumber 2 : %d\n",no1,no2);
    fun_by_val(no1,no2);

    printf("\nUsing function by reference : ");
    printf("\tBefore swapping :\n");
    printf("\tnumber 1 : %d\n\tnumber 2 : %d\n",no1,no2);

    fun_by_ref(&no1,&no2);
    
    printf("\tAfter swapping : \n");
    printf("\tnumber 1 : %d\n\tnumber 2 : %d\n",no1,no2);
}

void fun_by_val(int n1,int n2)
{
    int temp;
    temp=n1;
    n1=n2;
    n2=temp;
    printf("\tAfter swapping :\n");
    printf("\tnumber 1 : %d\n\tnumber 2 : %d\n",n1,n2);
}

void fun_by_ref(int *n1,int *n2)
{
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
}