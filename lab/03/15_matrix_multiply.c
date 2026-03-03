#include <stdio.h>
/* 15. Write a program to multiply two matrices (check compatibility). */
int main() {
    int r1, c1, r2, c2;
    printf("Enter rows and cols of matrix-a: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and cols of matrix-b: ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2) {
        printf("Matrices not compatible for multiplication.\n");
        return 0;
    }
    int a[r1][c1], b[r2][c2], prod[r1][c2];
    printf("Enter matrix A:\n");
    for (int i = 0; i < r1; i++) for (int j = 0; j < c1; j++) scanf("%d", &a[i][j]);
    printf("Enter matrix B:\n");
    for (int i = 0; i < r2; i++) for (int j = 0; j < c2; j++) scanf("%d", &b[i][j]);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            prod[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                prod[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Product matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) printf("%d\t", prod[i][j]);
        printf("\n");
    }
    return 0;
}
