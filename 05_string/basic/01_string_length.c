#include <stdio.h>
#include <string.h>
int stringLength(char *str)
{
    int len = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
        len++;
    }
    return len - 1;
}

int main()
{
    char str[50];
    printf("Enter a string: ");
    fgets(str, (sizeof str), stdin);

    int result = stringLength(str);
    printf("Length of a string: %d", result);

    return 0;
}