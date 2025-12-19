#include <stdio.h>
#include <math.h>

int isPrime(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int result = isPrime(n);
    if (result)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);

    return 0;
}

int isPrime(int n)
{
    if (n <= 1)
        return 0;

    if (n == 2)
        return 0;

    if (n % 2 == 0)
        return 0;
}