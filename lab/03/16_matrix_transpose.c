#include <stdio.h>
/* 16. Write a program to find the transpose of a given matrix. */
int main() {
    int r, c;
    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);
    int m[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    printf("Transpose matrix:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d\t", m[j][i]);
        }
        printf("\n");
    }
    return 0;
}
