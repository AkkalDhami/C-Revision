#include <stdio.h>
//? Inverted Full Pyramid
//? Spaces = i - 1
//? Stars = 2 * (n - i) + 1

int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s < i; s++)
            printf(" ");

        for (int j = 1; j <= 2 * (n - i) + 1; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}