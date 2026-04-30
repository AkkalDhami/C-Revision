#include <stdio.h>
/* 34. Write a program to count digits, spaces, and special characters in a string. */
int main() {
    char str[100];
    int d = 0, s = 0, sp = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') d++;
        else if (str[i] == ' ') s++;
        else if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))) sp++;
    }
    printf("Digits: %d, Spaces: %d\nSpecial Characters: %d\n", d, s, sp);
    return 0;
}
