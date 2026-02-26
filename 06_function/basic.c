#include <stdio.h>

//? function declaration or function prototype
int add(int, int);
void sub(int, int);
int prod(int, int);
float div(int, int);

//? function definition or function body
int add(int a, int b)
{
    return a + b;
}

float div(int a, int b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        return 0.00;
    }
}

int main()
{
    int x, y;
    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    //? function call or function invokation
    printf("Addition of %d & %d: %d\n", x, y, add(x, y));
    printf("Product of %d & %d: %d\n", x, y, prod(x, y));
    printf("Division of %d & %d: %.2f\n", x, y, div(x, y));
    return 0;
}

void sub(int x, int y)
{
    printf("Difference of %d & %d: %d\n", x, y, x - y);
}

int prod(int a, int b)
{
    return a * b;
}
