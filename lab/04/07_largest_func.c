#include <stdio.h>
/* 7. Write a C program to find the largest of three numbers using a function. */

int findLargest(int a, int b, int c) {
    if (a >= b && a >= c) return a;
    if (b >= a && b >= c) return b;
    return c;
}

int main() {
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("Largest: %d\n", findLargest(x, y, z));
    return 0;
}
