#include <stdio.h>
#include <string.h>
/* 52. Write a program to generate all permutations of a given string. */
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int n = strlen(str);
    // Simple iterative approach for permutations is complex; usually done via recursion.
    // Since "no functions" is a rule, I will implement a basic bubble-sort based next_permutation logic if possible.
    // Or just a simple nested loop if size is small (but that's limited).
    // Let's use lexicographical next permutation algorithm (iterative).
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (str[i] > str[j]) {
                char t = str[i]; str[i] = str[j]; str[j] = t;
            }
        }
    }
    while (1) {
        printf("%s\n", str);
        int i = n - 2;
        while (i >= 0 && str[i] >= str[i + 1]) i--;
        if (i < 0) break;
        int j = n - 1;
        while (str[j] <= str[i]) j--;
        char t = str[i]; str[i] = str[j]; str[j] = t;
        int l = i + 1, r = n - 1;
        while (l < r) {
            t = str[l]; str[l] = str[r]; str[r] = t;
            l++; r--;
        }
    }
    return 0;
}
