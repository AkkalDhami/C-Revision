#include <stdio.h>
/* 24. Write a program to find the missing number in an array of size n containing numbers from 1 to n+1. */
int main() {
    int n;
    printf("Enter n (array size): ");
    scanf("%d", &n);
    int arr[n];
    int expectedSum = (n + 1) * (n + 2) / 2;
    int actualSum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        actualSum += arr[i];
    }
    printf("Missing number: %d\n", expectedSum - actualSum);
    return 0;
}
