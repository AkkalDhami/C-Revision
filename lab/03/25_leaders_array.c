#include <stdio.h>
/* 25. Write a program to find all leaders in an array (element greater than all elements to its right). */
int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Leaders: ");
    for (int i = 0; i < n; i++) {
        int isLeader = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] <= arr[j]) {
                isLeader = 0;
                break;
            }
        }
        if (isLeader) printf("%d ", arr[i]);
    }
    return 0;
}
