#include <stdio.h>
/* 4. Write a C program to create a function that accepts a number and returns its square. */

int square(int n) {
    return n * n;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Square: %d\n", square(num));
    return 0;
}
