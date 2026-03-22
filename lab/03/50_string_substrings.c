#include <stdio.h>
#include <string.h>
/* 50. Write a program to generate all possible substrings of a given string. */
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int n = strlen(str);
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            for (int k = i; k <= j; k++) printf("%c", str[k]);
            printf("\n");
        }
    }
    return 0;
}
