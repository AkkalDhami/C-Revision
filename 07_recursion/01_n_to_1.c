#include<stdio.h>

void printNto1(int n)
{
    if (n == 0)
        return;

    printf("%d ", n);
    printNto1(n - 1);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Numbers from %d to 1: ", n);
    printNto1(n);

    return 0;
}