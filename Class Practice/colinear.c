#include <stdio.h>
int main()
{
    int x1, x2, x3, y1, y2, y3;
    printf("Enter the value of x1 and y1 :");
    scanf("%d %d", &x1, &y1);
    printf("Enter the value of x2 and y2 :");
    scanf("%d %d", &x2, &y2);
    printf("Enter the value of x3 and y3 :");
    scanf("%d %d", &x3, &y3);
    int value = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
    if (value == 0)
    {
        printf("Enter points are colinear");
    }
    else
    {
        printf("Enter points are not colinear");
    }
}
