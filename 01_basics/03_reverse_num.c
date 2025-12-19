#include <stdio.h>

int reverse(int n)
{
    int rev = 0;
    while (n > 0)
    {
        int rem = n % 10;
        n = n / 10;
        rev = rev * 10 + rem;
    }
    return rev;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Reverse of %d : %d\n", n, reverse(n));

    return 0;
}