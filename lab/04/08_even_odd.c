#include <stdio.h>
/* 8. Write a C program to check whether a number is even or odd using a function. */

void checkEvenOdd(int n) {
    if (n % 2 == 0) printf("%d is Even\n", n);
    else printf("%d is Odd\n", n);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    checkEvenOdd(num);
    return 0;
}
