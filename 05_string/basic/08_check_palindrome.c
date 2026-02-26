#include <stdio.h>
#include <string.h>

void stringRev(char *str)
{
    int i = 0, j = strlen(str);
    while (i < j)
    {
        int t = str[i];
        str[i] = str[j];
        str[j] = t;
        i++;
        j--;
    }
}

// int isPalindrome(char *str)
// {
//     char copiedStr[60];
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         copiedStr[i] += str[i];
//     }
//     printf("%s", copiedStr);
//     stringRev(str);
//     return (copiedStr == str ? 1 : 0);
// }

int main()
{
    char str[50];
    printf("Enter a string: ");
    fgets(str, (sizeof str), stdin);

    return 0;
}