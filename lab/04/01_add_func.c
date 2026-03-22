#include <stdio.h>
/* 1. Write a C program to create a user-defined function that adds two numbers and returns the result. */

int add(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Sum: %d\n", add(x, y));
    return 0;
}
