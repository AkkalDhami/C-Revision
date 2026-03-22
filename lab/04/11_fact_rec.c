#include <stdio.h>
/* 11. Write a recursive function to find factorial of a number. */

int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial: %d\n", factorial(num));
    return 0;
}
