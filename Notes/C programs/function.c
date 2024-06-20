#include<stdio.h>

void message(); //function declaration

void main()
{
    message(); //function call
    printf("You are in main function!");
}

void message() // function definition
{
    printf("Hello World\n");
}