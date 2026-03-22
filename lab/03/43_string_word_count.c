#include <stdio.h>
/* 43. Write a program to count the number of words in a sentence. */
int main() {
    char str[100];
    int count = 0, inWord = 0;
    printf("Enter a sentence: ");
    scanf("%[^\n]", str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
            if (!inWord) {
                count++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }
    printf("Word count: %d\n", count);
    return 0;
}
