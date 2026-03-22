#include <stdio.h>
/* 51. Write a program to perform run-length encoding of a string (e.g., "aaabbc" -> "a3b2c1"). */
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++) {
        int count = 1;
        while (str[i] == str[i + 1]) {
            count++;
            i++;
        }
        printf("%c%d", str[i], count);
    }
    return 0;
}
