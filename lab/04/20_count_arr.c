#include <stdio.h>
/* 20. Write a program to count even and odd numbers in an array using a function. */

void countEvenOdd(int arr[], int size) {
    int even = 0, odd = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) even++;
        else odd++;
    }
    printf("Even: %d, Odd: %d\n", even, odd);
}

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    countEvenOdd(arr, n);
    return 0;
}
