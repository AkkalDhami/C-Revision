#include <stdio.h>
/* 38. Write a program to capitalize the first letter of each word in a sentence. */
int main() {
    char str[100];
    printf("Enter a sentence: ");
    scanf("%[^\n]", str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (i == 0 || str[i - 1] == ' ') {
            if (str[i] >= 'a' && str[i] <= 'z') str[i] -= 32;
        }
    }
    printf("Result: %s\n", str);
    return 0;
}
