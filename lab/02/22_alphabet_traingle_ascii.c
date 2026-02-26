#include <stdio.h>
//? Write a C program to print the following alphabet triangle pattern using ASCII values.
int main()
{
    int n;
    char ch = 'A';

    printf("Enter value of N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}