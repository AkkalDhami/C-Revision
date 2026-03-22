#include <stdio.h>
/* 46. Write a program to find the shortest word in a sentence. */
int main() {
    char str[100], shortest[100];
    int i = 0, minLen = 101, start = 0;
    printf("Enter a sentence: ");
    scanf("%[^\n]", str);
    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            int currentLen = i - start;
            if (currentLen > 0 && currentLen < minLen) {
                minLen = currentLen;
                for (int j = 0; j < minLen; j++) shortest[j] = str[start + j];
                shortest[minLen] = '\0';
            }
            if (str[i] == '\0') break;
            start = i + 1;
        }
        i++;
    }
    printf("Shortest word: %s\n", shortest);
    return 0;
}
