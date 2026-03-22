#include <stdio.h>
/* 48. Write a program to extract all numbers from a given string. */
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') printf("%c", str[i]);
    }
    return 0;
}
