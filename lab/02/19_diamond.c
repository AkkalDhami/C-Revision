#include <stdio.h>
//? Diamond Pattern (Odd N Only)
int main()
{
    int n;
    printf("Enter an odd number: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Error: N must be odd.\n");
        return 0;
    }

    int mid = n / 2 + 1;

    for (int i = 1; i <= mid; i++)
    {
        for (int s = 1; s <= mid - i; s++)
            printf(" ");

        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");
    }

    for (int i = mid - 1; i >= 1; i--)
    {
        for (int s = 1; s <= mid - i; s++)
            printf(" ");

        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}