#include <stdio.h>
/* 35. Write a program to convert a lowercase string to uppercase without using toupper(). */
int main() {
    char str[100];
    printf("Enter a lowercase string: ");
    scanf("%[^\n]", str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') str[i] -= 32;
    }
    printf("Uppercase: %s\n", str);
    return 0;
}
