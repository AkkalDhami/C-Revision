#include <stdio.h>
/* 18. Write a program to check whether a given matrix is an identity matrix. */
int main() {
    int n, isIdentity = 1;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int m[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &m[i][j]);
            if (i == j && m[i][j] != 1) isIdentity = 0;
            if (i != j && m[i][j] != 0) isIdentity = 0;
        }
    }
    if (isIdentity) printf("It is an identity matrix.\n");
    else printf("It is not an identity matrix.\n");
    return 0;
}
