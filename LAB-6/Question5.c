#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if a character is a vowel
bool isVowel(char c)
{
    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        return true;
    default:
        return false;
    }
}

int main()
{
    char text[1000];

    // Prompt the user to enter a line of text
    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);

    int count = 0;
    int len = strlen(text);

    // Loop through the characters in the input text
    for (int i = 0; i < len - 1; i++)
    {
        // Check if the current character and the next character are both vowels
        if (isVowel(text[i]) && isVowel(text[i + 1]))
        {
            // If two vowels are found in succession, print them
            printf("Found two vowels in succession: %c%c\n", text[i], text[i + 1]);
            count++;
        }
    }

    // Print the total number of occurrences of two vowels in succession
    printf("Total number of occurrences of two vowels in succession: %d\n", count);

    return 0;
}
