#include <stdio.h>
/* 21. Write a program to delete an element from a specific position in an array. */
int main() {
    int n, pos;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    if (pos > n || pos < 1) {
        printf("Invalid position\n");
    } else {
        for (int i = pos - 1; i < n - 1; i++) arr[i] = arr[i + 1];
        for (int i = 0; i < n - 1; i++) printf("%d ", arr[i]);
    }
    return 0;
}
