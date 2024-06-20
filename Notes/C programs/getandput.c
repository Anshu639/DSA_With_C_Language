#include<stdio.h>

void main()
{
    char str[10];

    printf("enter any string : \n");
    gets(str);

    printf("You entered : ");
    puts(str);

    printf("first 10 character of string : \n");
    fgets(str,11,stdin);

    printf("You entered : ");
    puts(str);
}