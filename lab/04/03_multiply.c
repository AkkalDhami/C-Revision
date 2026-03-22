#include <stdio.h>
/* 3. Write a C program to create a function that takes two integers and prints their multiplication (argument, no return). */

void multiply(int a, int b) {
    printf("Multiplication: %d\n", a * b);
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    multiply(x, y);
    return 0;
}
