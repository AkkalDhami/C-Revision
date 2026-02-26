#include <stdio.h>
//? Write a C program to print the following pyramid square pattern using numbers.
int main()
{
    int n;
    int num = 1;

    printf("Enter value of N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num * num);
            num++;
        }
        printf("\n");
    }

    return 0;
}