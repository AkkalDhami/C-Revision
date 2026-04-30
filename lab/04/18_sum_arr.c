#include <stdio.h>
/* 18. Write a program to find sum of elements of an array using a function. */

int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Sum of elements: %d\n", sumArray(arr, n));
    return 0;
}
