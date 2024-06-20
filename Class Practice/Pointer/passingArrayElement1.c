#include <stdio.h>
void display1(int);
void display2(int *, int);
int main()
{
    int i;
    int marks[] = {2, 4, 6, 8, 10, 12, 14};
    for (i = 0; i <= 6; i++)
    {
        display1(marks[i]);
    }
    printf("\n");
    // for (i = 0; i <= 6; i++)
    // {
    //     display2(&marks[i]);
    // }
    display2(marks, 7);
    return 0;
}
void display1(int m)
{
    printf("%d\t", m);
}
void display2(int *n, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d", n[i]);
    }
}
