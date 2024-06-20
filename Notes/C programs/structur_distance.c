#include<stdio.h>

struct Dist{
    float inch;
    int feet;
}dist1,dist2,sum;

void main()
{
    printf("\nEnter inch for first distance : ");
    scanf("%f",&dist1.inch);
    
    printf("\nEnter feet for first distance : ");
    scanf("%d",&dist1.feet);

    printf("\nEnter inch for second distance : ");
    scanf("%f",&dist2.inch);
    
    printf("\nEnter feet for second distance : ");
    scanf("%d",&dist2.feet);

    sum.inch=dist1.inch+dist2.inch;
    sum.feet=dist1.feet+dist2.feet;

    if(sum.inch>=12)
    {
        ++sum.feet;
        sum.inch=sum.inch-12;
    }

    printf("\nSum of two Distance : %d\'-%.1f\"",sum.feet,sum.inch);
}