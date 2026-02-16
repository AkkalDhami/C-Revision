#include <stdio.h>
#include <string.h>

int countVowel(char *str);
int countConsonant(char *str);
int countConsonant2(char *str);
int countAlphabet(char *str);

int countVowel(char *str)
{
    char vowels[] = "aeiouAEIOU";
    int vowelCount = 0, uq = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        for (int j = 0; vowels[j] != '\0'; j++)
        {
            if (str[i] == vowels[j])
            {
                vowelCount++;
                break;
            }
        }
    }
    return vowelCount;
}

int countConsonant(char *str)
{
    return (countAlphabet(str) - countVowel(str));
}

int countConsonant2(char *str)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if ((ch >= 'A' && ch <= 'Z'))
        /* 
        * A => 65
        * a => 97
        */
            ch = ch + 32; 

        if (ch >= 'a' && ch <= 'z' &&
            !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'))
        {
            count++;
        }
    }
    return count;
}

int countAlphabet(char *str)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char str[50];
    printf("Enter a string: ");
    fgets(str, (sizeof str), stdin);

    printf("No. of alphabets: %d\n", countAlphabet(str));
    printf("No. of vowels: %d\n", countVowel(str));
    printf("No. of consonants: %d\n", countConsonant(str));

    return 0;
}