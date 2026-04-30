#include <stdio.h>
/* 27. Write a program to find transpose of a matrix using function. */

void transposeMatrix(int r, int c, int a[r][c]) {
    printf("Transpose:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }
}

int main() {
    int r, c;
    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    transposeMatrix(r, c, a);
    return 0;
}
