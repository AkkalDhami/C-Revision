#include <stdio.h>
#include <string.h>
/* 47. Write a program to sort the words in a sentence alphabetically. */
int main() {
    char str[100], words[10][20], temp[20];
    int n = 0, j = 0;
    printf("Enter a sentence: ");
    scanf("%[^\n]", str);
    for (int i = 0; i <= strlen(str); i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            words[n][j] = '\0';
            n++;
            j = 0;
        } else {
            words[n][j++] = str[i];
        }
    }
    for (int i = 0; i < n - 1; i++) {
        for (int k = i + 1; k < n; k++) {
            if (strcmp(words[i], words[k]) > 0) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[k]);
                strcpy(words[k], temp);
            }
        }
    }
    for (int i = 0; i < n; i++) printf("%s ", words[i]);
    return 0;
}
