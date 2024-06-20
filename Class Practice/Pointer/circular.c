#include <stdio.h>
void shift(int *, int *, int *);
int main()
{
    int n1, n2, n3;

    printf("Enter the values:");
    scanf("%d %d %d", &n1, &n2, &n3);

    char new;
    do
    {
        shift(&n1, &n2, &n3);
        printf("value after shifting:%d %d %d \n", n1, n2, n3);
        printf("do you want to shift?(yes/no)");
        scanf(" %c", &new);
    } while (new == 'Y' || new == 'y');
    return 0;
}
void shift(int *a, int *b, int *c)
{
    int t = *a;
    *a = *c;
    *c = *b;
    *b = t;
}