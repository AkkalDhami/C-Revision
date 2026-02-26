#include <stdio.h>

int fact(int n)
{
    if (n == 0) //! base case
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int main()
{
    //? recursive function: function calling itself
    int n;
    printf("Enter a no: ");
    scanf("%d", &n);
    int result = fact(n);
    printf("Factorial of %d: %d", n, result);
    return 0;
}