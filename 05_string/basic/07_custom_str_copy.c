#include <stdio.h>
#include <string.h>

void stringCpy(char *originalStr, char *targetStr)
{
    int i = 0;
    while (originalStr[i] != '\0')
    {
        targetStr[i] = originalStr[i];
        i++;
    }
    targetStr[i] = '\0'; //? put null character('\0) at end of targetStr
}

int main()
{
    char str[50];
    char targetStr[strlen(str) + 5];
    printf("Enter a string: ");
    fgets(str, (sizeof str), stdin);

    stringCpy(str, targetStr);
    printf("Copied string: %s", targetStr);
    return 0;
}