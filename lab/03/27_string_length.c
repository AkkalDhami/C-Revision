#include <stdio.h>
/* 27. Write a program to find the length of a string without using built-in functions. */
int main() {
    char str[100];
    int len = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    while (str[len] != '\0') len++;
    printf("Length: %d\n", len);
    return 0;
}
