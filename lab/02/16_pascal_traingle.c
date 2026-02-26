#include <stdio.h>

//? Print Pascal's Triangle using combination formula

int main()
{
    int n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) 
    {
        int value = 1;

        for (int j = 0; j <= i; j++) 
        {
            printf("%d ", value);
            value = value * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}