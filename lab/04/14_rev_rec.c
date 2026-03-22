#include <stdio.h>
/* 14. Write a recursive function to reverse a number. */

int sum = 0;
void reverseNumber(int n) {
    if (n > 0) {
        sum = sum * 10 + (n % 10);
        reverseNumber(n / 10);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    reverseNumber(num);
    printf("Reversed: %d\n", sum);
    return 0;
}
