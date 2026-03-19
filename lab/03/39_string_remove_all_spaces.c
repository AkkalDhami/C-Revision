#include <stdio.h>
/* 39. Write a program to remove all spaces from a given string. */
int main() {
    char str[100], res[100];
    int i = 0, j = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    while (str[i] != '\0') {
        if (str[i] != ' ') res[j++] = str[i];
        i++;
    }
    res[j] = '\0';
    printf("Without spaces: %s\n", res);
    return 0;
}
