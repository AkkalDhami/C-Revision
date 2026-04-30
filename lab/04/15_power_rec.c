#include <stdio.h>
/* 15. Write a recursive function to calculate power (x^y). */

int power(int x, int y) {
    if (y == 0) return 1;
    return x * power(x, y - 1);
}

int main() {
    int base, exp;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);
    printf("Result: %d\n", power(base, exp));
    return 0;
}
