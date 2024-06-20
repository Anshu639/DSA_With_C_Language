#include<stdio.h>
void main()
{
    int i=10,*j,**k;
    j=&i;
    k=&j;

    printf("\n%d",i);//10
    printf("\n%d",j);//add of i
    printf("\n%d",k);//add of j
    printf("\n%d",*j);//10
    printf("\n%d",**k);//10
    printf("\n%d",&i);//add of i
    printf("\n%d",&j);//add of j
    printf("\n%d",&k);//add of k
}