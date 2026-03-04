#include <stdio.h>
/* 17. Write a program to calculate the sum of main diagonal and anti-diagonal elements. */
int main() {
    int n, mainSum = 0, antiSum = 0;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int m[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &m[i][j]);
            if (i == j) mainSum += m[i][j];
            if (i + j == n - 1) antiSum += m[i][j];
        }
    }
    printf("Main Diagonal Sum: %d\n", mainSum);
    printf("Anti-Diagonal Sum: %d\n", antiSum);
    return 0;
}
