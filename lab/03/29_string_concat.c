#include <stdio.h>
/* 29. Write a program to concatenate two strings without using strcat(). */
int main() {
    char s1[200], s2[100];
    int i = 0, j = 0;
    printf("Enter first string: ");
    scanf(" %[^\n]", s1);
    printf("Enter second string: ");
    scanf(" %[^\n]", s2);
    while (s1[i] != '\0') i++;
    while (s2[j] != '\0') s1[i++] = s2[j++];
    s1[i] = '\0';
    printf("Concatenated: %s\n", s1);
    return 0;
}
