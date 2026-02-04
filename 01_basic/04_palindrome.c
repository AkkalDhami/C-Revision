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

int isPalindrome(int n)
{
    return reverse(n) == n ? 1 : 0;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPalindrome(n))
    {
        printf("%d is a palindrome number.\n", n);
    }
    else
    {
        printf("%d is not a palindrome number.\n", n);
    }

    return 0;
}