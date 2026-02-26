#include <stdio.h>
//? Binary Triangle Pattern
int main()
{
    int n;

    printf("Enter value of N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", (i + j) % 2);
        }
        printf("\n");
    }

    return 0;
}