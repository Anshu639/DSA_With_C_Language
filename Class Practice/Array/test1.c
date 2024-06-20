#include <stdio.h>
int main()
{
    for (int i = 4; i >= 1; i--)
    {
        for (int j = 4; j >= i; j--)
            printf("%d", j);
        for (int k = 1; k < (i * 2) - 1; k++)
            printf("%d", i);
        for (int l = i + 1; l <= 4; l++)
            printf("%d", l);
        printf("\n");
    }
    for (int i = 2; i <= 4; i++)
    {
        for (int j = 4; j >= i; j--)
            printf("%d", j);
        for (int k = 1; k < (i * 2) - 1; k++)
            printf("%d", i);
        for (int l = i + 1; l <= 4; l++)
            printf("%d", l);
        printf("\n");
    }
}