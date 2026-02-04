#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a 1st number: ");
    scanf("%d", &a);
    printf("Enter a 2nd number: ");
    scanf("%d", &b);

    printf("%d + %d : %d\n", a, b, a + b);
    printf("%d - %d : %d\n", a, b, a - b);
    printf("%d * %d : %d\n", a, b, a * b);
    printf("%d / %d : %d\n", a, b, a / b);
    printf("%d modulus %d : %d\n", a, b, a % b);

    return 0;
}