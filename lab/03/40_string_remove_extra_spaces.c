#include <stdio.h>
/* 40. Write a program to remove extra spaces between words (keep single space). */
int main() {
    char str[100], res[100];
    int i = 0, j = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    while (str[i] == ' ') i++; // skip leading
    while (str[i] != '\0') {
        if (str[i] == ' ' && str[i + 1] == ' ') {
            i++;
            continue;
        }
        res[j++] = str[i++];
    }
    if (j > 0 && res[j - 1] == ' ') j--; // remove trailing
    res[j] = '\0';
    printf("Result: [%s]\n", res);
    return 0;
}
