#include <stdio.h>
/* 19. Write a program to check whether a given matrix is a sparse matrix(more zeros than non-zeros). */
int main() {
    int r, c, zeros = 0;
    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);
    int m[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &m[i][j]);
            if (m[i][j] == 0) zeros++;
        }
    }
    if (zeros > (r * c) / 2) printf("It is a sparse matrix.\n");
    else printf("It is not a sparse matrix.\n");
    return 0;
}
