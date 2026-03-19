#include <stdio.h>
/* 28. Write a program to copy one string into another without using strcpy(). */
int main() {
    char s1[100], s2[100];
    int i = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", s1);
    while (s1[i] != '\0') {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
    printf("Copied string: %s\n", s2);
    return 0;
}
