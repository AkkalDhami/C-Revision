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

    int max = arr[0][0], min = arr[0][0];
    int maxRowIdx = 0, minRowIdx = 0;
    int maxColIdx = 0, minColIdx = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                maxRowIdx = i;
                maxColIdx = j;
            }

            if (arr[i][j] < min)
            {
                min = arr[i][j];
                minRowIdx = i;
                minColIdx = j;
            }
        }
    }

    printf("Maximum element of given matrix in [%d,%d]: %d\n", maxRowIdx, maxColIdx, max);
    printf("Minimum element of given matrix in [%d,%d]: %d\n", minRowIdx, minColIdx, min);

    return 0;
}