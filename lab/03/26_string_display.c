#include <stdio.h>
/* 26. Write a C program to accept a string from the user and display it. */
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    printf("You entered: %s\n", str);
    return 0;
}
