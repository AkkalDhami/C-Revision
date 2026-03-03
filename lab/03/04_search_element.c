#include <stdio.h>

int main() {
    int n, key, found = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter search element: ");
    scanf("%d", &key);
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Found at position: %d\n", i + 1);
            found = 1;
        }
    }
    if (!found) printf("Not found\n");
    return 0;
}
