#include <stdio.h>
/* 36. Write a program to convert an uppercase string to lowercase without using tolower(). */
int main() {
    char str[100];
    printf("Enter an uppercase string: ");
    scanf("%[^\n]", str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
    }
    printf("Lowercase: %s\n", str);
    return 0;
}
