#include <stdio.h>
/* 32. Write a program to check whether a given string is a palindrome or not. */
int main() {
    char str[100];
    int len = 0, isPalindrome = 1;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    while (str[len] != '\0') len++;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome) printf("It is a palindrome.\n");
    else printf("It is not a palindrome.\n");
    return 0;
}
