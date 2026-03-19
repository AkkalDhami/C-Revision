#include <stdio.h>
/* 37. Write a program to toggle the case of each character in a string (lowercase to uppercase and vice versa). */
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') str[i] -= 32;
        else if (str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
    }
    printf("Toggled: %s\n", str);
    return 0;
}
