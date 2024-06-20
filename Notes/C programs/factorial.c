#include<stdio.h>
void main()
{
    int no,ans;

    printf("Enter a number");
    scanf("%d",&no);

    ans=fact(no);
    printf("Factorail of %d id %d", no,ans);
}

int fact(unsigned int i)
{
    if(i<=1)
        return 1;
    else
        return i*fact(i-1);
}