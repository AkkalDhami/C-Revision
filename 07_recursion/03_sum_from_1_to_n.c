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

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    sumFrom1toN(n, 0);

    return 0;
}