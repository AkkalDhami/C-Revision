#include <stdio.h>
/* 42. Write a program to replace all occurrences of a character with another character in a string. */
int main() {
    char str[100], oldCh, newCh;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    printf("Enter character to replace and new character: ");
    scanf(" %c %c", &oldCh, &newCh);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldCh) str[i] = newCh;
    }
    printf("Result: %s\n", str);
    return 0;
}
