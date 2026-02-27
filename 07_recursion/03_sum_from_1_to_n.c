#include <stdio.h>

void sumFrom1toN(int n, int sum)
{
    if (n == 0)
    {
        printf("Sum from 1 to n is: %d", sum);
        return;
    }

    sumFrom1toN(n - 1, sum + n);
}

int sumFrom1toNwithReturn(int n)
{
    if (n == 0)
        return 0;

    return n + sumFrom1toNwithReturn(n - 1);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    sumFrom1toN(n, 0);
    int result = sumFrom1toNwithReturn(n);
    printf("\nSum from 1 to %d is: %d", n, result);

    return 0;
}