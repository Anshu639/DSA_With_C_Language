// write a c program to find all the prime nos b/w 1-100

#include<stdio.h>
void main()
{
    int i,j,c;

    for(i=2;i<=100;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c+=1;
            }
        }
        if(c==2)
        {
            printf("%d ",i);
        }
    }
}