#include <stdio.h>
/* 5. Write a program to demonstrate call by value (show that original value does not change). */

void changeValue(int n) {
    n = n + 10;
    printf("Value inside function: %d\n", n);
}

int main() {
    int num = 5;
    printf("Value before function call: %d\n", num);
    changeValue(num);
    printf("Value after function call: %d\n", num);
    return 0;
}
