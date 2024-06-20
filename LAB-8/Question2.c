#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

// Define the stack data structure
struct Stack
{
    char items[MAX_SIZE];
    int top;
};

// Initialize the stack
void initialize(struct Stack *stack)
{
    stack->top = -1;
}

// Check if the stack is empty
int isEmpty(struct Stack *stack)
{
    return stack->top == -1;
}

// Check if the stack is full
int isFull(struct Stack *stack)
{
    return stack->top == MAX_SIZE - 1;
}

// Push a character onto the stack
void push(struct Stack *stack, char value)
{
    if (isFull(stack))
    {
        printf("Stack is full. Cannot push %c.\n", value);
        return;
    }
    stack->items[++stack->top] = value;
}

// Pop a character from the stack
char pop(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is empty. Cannot pop.\n");
        exit(1);
    }
    return stack->items[stack->top--];
}

int main()
{
    struct Stack stack;
    initialize(&stack);

    char input[MAX_SIZE];
    printf("Enter a string: ");
    scanf("%s", input);

    int length = strlen(input);
    int i;

    // Push each character onto the stack
    for (i = 0; i < length; i++)
    {
        push(&stack, input[i]);
    }

    char reversed[MAX_SIZE];
    int j = 0;

    // Pop characters from the stack to reverse the input
    while (!isEmpty(&stack))
    {
        reversed[j++] = pop(&stack);
    }

    reversed[j] = '\0'; // Null-terminate the reversed string

    printf("Reversed: %s\n", reversed);

    // Check if the input is a palindrome
    if (strcmp(input, reversed) == 0)
    {
        printf("%s is a palindrome!\n", input);
    }
    else
    {
        printf("%s is not a palindrome.\n", input);
    }

    return 0;
}
