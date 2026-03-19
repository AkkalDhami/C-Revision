#include <stdio.h>
/* 41. Write a program to find the frequency of each character in a string. */
int main() {
    char str[100];
    int freq[256] = {0};
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    for (int i = 0; str[i] != '\0'; i++) freq[(unsigned char)str[i]]++;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) printf("'%c' occurs %d times\n", i, freq[i]);
    }
    return 0;
}
