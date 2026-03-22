#include <stdio.h>
/* 49. Write a program to validate an email address format. */
int main() {
    char email[100];
    int at = -1, dot = -1;
    printf("Enter email: ");
    scanf("%s", email);
    for (int i = 0; email[i] != '\0'; i++) {
        if (email[i] == '@') at = i;
        if (email[i] == '.') dot = i;
    }
    if (at > 0 && dot > at + 1 && email[dot + 1] != '\0') printf("Valid format\n");
    else printf("Invalid format\n");
    return 0;
}
