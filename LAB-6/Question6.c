#include <stdio.h>

// Function to print the word representation of a number (0-9)
void printDigit(int digit)
{
    const char *words[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    printf("%s ", words[digit]);
}

// Function to convert a two-digit number into words
void convertTwoDigits(int num)
{
    if (num < 10)
    {
        printDigit(num);
    }
    else if (num >= 10 && num <= 19)
    {
        const char *teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
        printf("%s ", teens[num - 10]);
    }
    else
    {
        const char *tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
        printf("%s ", tens[num / 10]);
        if (num % 10 > 0)
        {
            printDigit(num % 10);
        }
    }
}

// Function to convert a three-digit number into words
void convertThreeDigits(int num)
{
    if (num >= 100)
    {
        printDigit(num / 100);
        printf("Hundred ");
        num %= 100;
        if (num > 0)
        {
            printf("and ");
        }
    }
    convertTwoDigits(num);
}

int main()
{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Negative ");
        number = -number;
    }

    if (number == 0)
    {
        printf("Zero\n");
    }
    else
    {
        if (number >= 1000)
        {
            convertThreeDigits(number / 1000);
            printf("Thousand ");
            number %= 1000;
        }
        convertThreeDigits(number);
        printf("\n");
    }

    return 0;
}
