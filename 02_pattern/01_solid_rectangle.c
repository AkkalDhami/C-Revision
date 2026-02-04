#include <stdio.h>

int main()
{
    //? 1. Take row and column from user
    //? 2. Print on the basis of row and column;
    /*
    ? row => 5, column => 4
    * * * *
    * * * *
    * * * *
    * * * *
    * * * *
    */

    int row, col;
    printf("Enter row: ");
    scanf("%d", &row);

    printf("Enter col: ");
    scanf("%d", &col);

    printf("\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}