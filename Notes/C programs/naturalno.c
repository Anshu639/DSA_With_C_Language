#include <stdio.h>
void main()
{
    int no;

    printf("Enter a number");
    scanf("%d",&no);

    printf("Sum of %d n natural number is : %d",no,sum(no));

}

int sum(int n)
{
    if(n!=0)
        return n+sum(n-1);
    else
        return 0;
}