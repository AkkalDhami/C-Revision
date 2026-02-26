#include <stdio.h>

//? Calculate and display the Fibonacci sequence up to the nth term

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int a = 0, b = 1, next;

    printf("Fibonacci sequence up to %d terms:\n", n);

    if (n >= 1)
        printf("%d ", a);

    if (n >= 2)
        printf("%d ", b);

    for (int i = 3; i <= n; i++)
    {
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }

    return 0;
}