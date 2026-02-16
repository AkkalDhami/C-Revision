#include <stdio.h>
#include <string.h>

void stringCat(char *str, char *str2)
{
    printf("\nConcatenated strings: %s%s", str, str2);
}

int main()
{
    char str[50];
    char str2[50];
    printf("Enter a 1st string: ");
    fgets(str, (sizeof str), stdin);
    str[strcspn(str, "\n")] = '\0';

    //! problem with fgets(): it cannot remove \n(newline)
    //? solution: str[strcspn(str, "\n")] = '\0';

    printf("Enter a 2nd string: ");
    fgets(str2, (sizeof str), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    stringCat(str, str2);
    return 0;
}