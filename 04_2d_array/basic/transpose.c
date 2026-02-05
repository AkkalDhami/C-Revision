#include <stdio.h>

int main()
{
    int row, col;
    printf("Enter the rows of array: ");
    scanf("%d", &row);

    printf("Enter the cols of array: ");
    scanf("%d", &col);

    int arr[row][col];

    printf("Enter elements of array:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Transpose of given array:\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}