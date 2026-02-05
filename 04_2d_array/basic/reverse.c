#include <stdio.h>

void reverseMatrix(int r, int c, int arr[r][c])
{
    for (int i = 0; i < r; i++)
    {
        int j = 0, k = c - 1;
        while (j < k)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
            j++;
            k--;
        }
    }
}

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

    printf("Original Matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    reverseMatrix(row, col, arr);

    printf("Reversed Matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}