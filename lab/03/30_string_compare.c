#include <stdio.h>
/* 30. Write a program to compare two strings without using strcmp(). */
int main() {
    char s1[100], s2[100];
    int i = 0, diff = 0;
    printf("Enter 1st string: ");
    scanf(" %[^\n]", s1);
    printf("Enter 2nd string: ");
    scanf(" %[^\n]", s2);
    while (s1[i] != '\0' || s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            diff = s1[i] - s2[i];
            break;
        }
        i++;
    }
    if (diff == 0) printf("Strings are equal.\n");
    else printf("Difference: %d\n", diff);
    return 0;
}
