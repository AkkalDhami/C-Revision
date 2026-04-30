#include <stdio.h>
/* 24. Write a program to add two matrices using functions. */

void addMatrices(int r, int c, int a[r][c], int b[r][c]) {
    printf("Sum of matrices:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d\t", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int r, c;
    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);
    int a[r][c], b[r][c];
    printf("Matrix A:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    printf("Matrix B:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &b[i][j]);
    addMatrices(r, c, a, b);
    return 0;
}
