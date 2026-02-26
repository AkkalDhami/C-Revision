#include<stdio.h>
//? Calculate the factorial of a given number.

int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    int f = 1;
    for (int i = 1; i <= n ; i++)
    {
        f *= i;
    }

    printf("Factorial of %d: %d", n, f);
    

    return 0;
}