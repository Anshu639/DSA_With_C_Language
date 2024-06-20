#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> // Include ctype.h for isdigit function

#define MAX_SIZE 100

// Define a stack data structure for characters
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

// Get the precedence of an operator
int getPrecedence(char operator)
{
    if (operator== '+' || operator== '-')
        return 1;
    if (operator== '*' || operator== '/')
        return 2;
    return 0; // Lower precedence for other characters (operands, parentheses)
}

// Convert infix expression to postfix
void infixToPostfix(char *infix, char *postfix)
{
    struct Stack operatorStack;
    initialize(&operatorStack);

    int infixLength = strlen(infix);
    int postfixIndex = 0;

    for (int i = 0; i < infixLength; i++)
    {
        char currentChar = infix[i];

        if (isdigit(currentChar))
        {
            postfix[postfixIndex++] = currentChar; // Operand, add to postfix
        }
        else if (currentChar == '(')
        {
            push(&operatorStack, currentChar);
        }
        else if (currentChar == ')')
        {
            while (!isEmpty(&operatorStack) && operatorStack.items[operatorStack.top] != '(')
            {
                postfix[postfixIndex++] = pop(&operatorStack);
            }
            pop(&operatorStack); // Pop and discard '('
        }
        else
        {
            // Operator
            while (!isEmpty(&operatorStack) && getPrecedence(currentChar) <= getPrecedence(operatorStack.items[operatorStack.top]))
            {
                postfix[postfixIndex++] = pop(&operatorStack);
            }
            push(&operatorStack, currentChar);
        }
    }

    // Pop any remaining operators from the stack
    while (!isEmpty(&operatorStack))
    {
        postfix[postfixIndex++] = pop(&operatorStack);
    }

    postfix[postfixIndex] = '\0'; // Null-terminate the postfix string
}

// Evaluate a postfix expression
int evaluatePostfix(char *postfix)
{
    struct Stack operandStack;
    initialize(&operandStack);

    int postfixLength = strlen(postfix);

    for (int i = 0; i < postfixLength; i++)
    {
        char currentChar = postfix[i];

        if (isdigit(currentChar))
        {
            push(&operandStack, currentChar - '0'); // Convert char to int and push as operand
        }
        else
        {
            int operand2 = pop(&operandStack);
            int operand1 = pop(&operandStack);

            switch (currentChar)
            {
            case '+':
                push(&operandStack, operand1 + operand2);
                break;
            case '-':
                push(&operandStack, operand1 - operand2);
                break;
            case '*':
                push(&operandStack, operand1 * operand2);
                break;
            case '/':
                push(&operandStack, operand1 / operand2);
                break;
            }
        }
    }

    return pop(&operandStack); // Result is on top of the operand stack
}

int main()
{
    char infixExpression[] = "2+3*5+8/2+6";
    char postfixExpression[MAX_SIZE];

    infixToPostfix(infixExpression, postfixExpression);
    printf("Infix Expression: %s\n", infixExpression);
    printf("Postfix Expression: %s\n", postfixExpression);

    int result = evaluatePostfix(postfixExpression);
    printf("Result: %d\n", result);

    return 0;
}
