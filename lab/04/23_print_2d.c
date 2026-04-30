#include <stdio.h>
/* 23. Write a program to pass a 2D array to a function and print matrix. */

void printMatrix(int r, int c, int mat[r][c]) {
    printf("Matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int r, c;
    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);
    int mat[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);
    printMatrix(r, c, mat);
    return 0;
}
