#include <stdio.h>
void main()
{
    int num[5];
    int copy[5];
    for (int i = 0; i < 5; i++)
    {

        printf("Enter the number of element %d", i);
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (num[i] % 5 == 0)
        {
            num[i] = 0;
        }
        // copy[i] = num[i];
        printf("%d,", num[i]);
    }
}