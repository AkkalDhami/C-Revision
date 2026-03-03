#include <stdio.h>
/* 13. Write a program to add two matrices of the same size. */
int main() {
    int r, c;
    printf("Enter rows and col: ");
    scanf("%d %d", &r, &c);
    int a[r][c], b[r][c], sum[r][c];
    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &b[i][j]);
    printf("Sum of matrices:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
