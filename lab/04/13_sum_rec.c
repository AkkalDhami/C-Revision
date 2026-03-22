#include <stdio.h>
/* 13. Write a recursive function to find sum of first n natural numbers. */

int sumNatural(int n) {
    if (n == 0) return 0;
    return n + sumNatural(n - 1);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Sum: %d\n", sumNatural(n));
    return 0;
}
