#include <stdio.h>
// Using a switch case, find out whether a given character is a vowel or a consonant.

int main()
{
    char c[2];
    printf("Enter a character: ");
    scanf("%c", c);

    switch ((int)c)
    {
    case 65:
        printf("Vowel character - %d", (int)c);
        break;
    case 69:
        printf("Vowel character");
        break;
    case 73:
        printf("Vowel character");
        break;
    case 79:
        printf("Vowel character");
        break;
    case 85:
        printf("Vowel character");
        break;

    default:
        printf("Consonant character");
        break;
    }

    return 0;
}