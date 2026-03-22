#include <stdio.h>
/* 45. Write a program to find the longest word in a sentence. */
int main() {
    char str[100], longest[100];
    int i = 0, maxLen = 0, start = 0;
    printf("Enter a sentence: ");
    scanf("%[^\n]", str);
    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            int currentLen = i - start;
            if (currentLen > maxLen) {
                maxLen = currentLen;
                for (int j = 0; j < maxLen; j++) longest[j] = str[start + j];
                longest[maxLen] = '\0';
            }
            if (str[i] == '\0') break;
            start = i + 1;
        }
        i++;
    }
    printf("Longest word: %s\n", longest);
    return 0;
}
