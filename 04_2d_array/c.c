#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Enter the size of array1: ");
    scanf("%d", &n1);

    printf("Enter the size of array2: ");
    scanf("%d", &n2);

    int arr1[n1][n2];
    int arr2[n1][n2];

    for (int i = 0; i < n1; i++)
    {

        for (int j = 0; j < n2; j++)
        {
            printf("Enter element [%d][%d] for array: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    for (int i = 0; i < n1; i++)
    {

        for (int j = 0; j < n2; j++)
        {
            printf("Enter element [%d][%d] for array: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("First Matrix\n");
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }

    printf("Second Matrix\n");
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }

    printf("Matrix Addition\n");
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("%d\t", arr1[i][j] + arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}