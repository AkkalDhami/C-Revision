#include <stdio.h>
/* 33. Write a program to count the number of vowels and consonants in a string. */
int main() {
    char str[100];
    int v = 0, c = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            char vowels[] = "aeiouAEIOU";

            for (int j = 0; vowels[j] != '\0'; j++) {
                if (ch == vowels[j]) {
                    v++;
                    break;
                } else if (vowels[j + 1] == '\0') {
                    c++;
                }
            }

            // if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            //     ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            //     v++;
            // } else {
            //     c++;
            // }
        }
    }
    printf("Vowels: %d, Consonants: %d\n", v, c);
    return 0;
}
