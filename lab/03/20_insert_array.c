#include <stdio.h>
/* 20. Write a program to insert an element at a specific position in an array. */
int main() {
    int n, pos, val;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter position and value to insert: ");
    scanf("%d %d", &pos, &val);
    for (int i = n; i >= pos; i--) arr[i] = arr[i - 1];
    arr[pos - 1] = val;
    for (int i = 0; i <= n; i++) printf("%d ", arr[i]);
    return 0;
}
