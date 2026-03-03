#include <stdio.h>
/* 12. Write a program to calculate the sum of all elements in a matrix. */
int main() {
    int r, c, sum = 0;
    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);
    int m[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &m[i][j]);
            sum += m[i][j];
        }
    }
    printf("Sum of all elements: %d\n", sum);
    return 0;
}
