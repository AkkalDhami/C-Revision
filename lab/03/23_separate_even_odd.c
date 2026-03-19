#include <stdio.h>
/* 23. Write a program to separate even and odd numbers into two different arrays. */
int main() {
    int n, eCount = 0, oCount = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n], even[n], odd[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) even[eCount++] = arr[i];
        else odd[oCount++] = arr[i];
    }
    printf("Even array: ");
    for (int i = 0; i < eCount; i++) printf("%d ", even[i]);
    printf("\nOdd array: ");
    for (int i = 0; i < oCount; i++) printf("%d ", odd[i]);
    return 0;
}
