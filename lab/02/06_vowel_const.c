#include <stdio.h>
// Using a switch case, find out whether a given character is a vowel or a consonant.

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    switch (ch)
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
        printf("%c is a vowel character.\n", ch);
        break;

    default:
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            printf("It is a consonant character.\n", ch);
        else
            printf("It is not an alphabet character.\n");
    }
    return 0;
}