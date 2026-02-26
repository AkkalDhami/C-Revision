#include <stdio.h>

int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("%d is positive no.", n);
    }
    else if (n < 0)
    {
        printf("%d is negative no.", n);
    }
    else
    {
        printf("%d is zero", n);
    }

    return 0;
}