#include <stdio.h>

void toLowercase(char *str);
void toUpperrcase(char *str);

int main()
{
    char str[50];
    printf("Enter a string: ");
    fgets(str, (sizeof str), stdin);
    toLowercase(str);
    printf("\nLowercase string: %s", str);
    toUpperrcase(str);
    printf("Uppercase string: %s", str);
    return 0;
}

void toLowercase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
}

void toUpperrcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
}