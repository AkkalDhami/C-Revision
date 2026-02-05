#include <stdio.h>

int main()
{
    int r1, c1, r2, c2;
    printf("Enter the rows of 1st array: ");
    scanf("%d", &r1);

    printf("Enter the cols of 1st array: ");
    scanf("%d", &c1);

    int arr1[r1][c1];

    printf("Enter elements of 1st array:\n");
    for (int i = 0; i < r1; i++)
    {

        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter the rows of 2nd array: ");
    scanf("%d", &r2);

    printf("Enter the cols of 2nd array: ");
    scanf("%d", &c2);

    int arr2[r2][c2];

    printf("Enter elements of 2nd array:\n");
    for (int i = 0; i < r2; i++)
    {

        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("First Matrix\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < r2; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }

    printf("Second Matrix\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < r2; j++)
        {
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }

    printf("Matrix Addition\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < r2; j++)
        {
            printf("%d\t", arr1[i][j] + arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}