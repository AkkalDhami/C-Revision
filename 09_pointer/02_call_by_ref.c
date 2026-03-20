#include <stdio.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int a, b;
    printf("Enter two no: ");
    scanf("%d %d", &a, &b);

    printf("Original, a: %d, b: %d\n", a, b);
    swap(&a, &b);
    printf("After swap, a: %d, b: %d\n", a, b);
    return 0;
}