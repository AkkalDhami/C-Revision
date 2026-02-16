#include <stdio.h>
#include <string.h>

void findChar(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            printf("\n%c is a lowercase string.\n", str[i]);
            printf("ASCII Value of %c : %d\n", str[i], str[i]);
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            printf("\n%c is an uppercase string.\n", str[i]);
            printf("ASCII Value of %c : %d\n", str[i], str[i]);
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            printf("\n%c is a digit.\n", str[i]);
            printf("ASCII Value of %c : %d\n", str[i], str[i]);
        }
    }
}

int main()
{
    char str[50];
    printf("Enter a string: ");
    fgets(str, (sizeof str), stdin);

    findChar(str);

    return 0;
}