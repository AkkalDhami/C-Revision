#include <stdio.h>

int isEven(int n)
{
    return n % 2 == 0 ? 1 : 0;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isEven(num))
    {
        printf("%d is even number.\n", num);
    }
    else
    {
        printf("%d is odd number.\n", num);
    }

    return 0;
}