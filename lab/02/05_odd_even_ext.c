#include <stdio.h>

// Write a program to check if a number is odd or even.If the number is odd, calculate and display its cube.If the number is even, calculate and display its square.

int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    if (n & 1){
        printf("Cube of %d: %d", n, n * n * n);
    }
    else{
        printf("Square of %d: %d", n, n * n);
    }
    return 0;
}