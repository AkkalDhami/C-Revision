#include <stdio.h>
/* 44. Write a program to reverse the words in a sentence (e.g., "Hello World" -> "World Hello"). */
int main() {
    char str[100], res[100] = "";
    int len = 0, start, end;
    printf("Enter a sentence: ");
    scanf("%[^\n]", str);
    while (str[len] != '\0') len++;
    end = len - 1;
    for (int i = len - 1; i >= 0; i--) {
        if (str[i] == ' ' || i == 0) {
            start = (i == 0) ? i : i + 1;
            for (int j = start; j <= end; j++) printf("%c", str[j]);
            if (i > 0) printf(" ");
            end = i - 1;
        }
    }
    return 0;
}
