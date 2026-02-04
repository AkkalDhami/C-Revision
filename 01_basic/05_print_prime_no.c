#include <stdio.h>

int canInterchange(int, int);
void swap(int *, int *);
int isPrime(int);
void printPrimeNo(int, int);

int main()
{
    int a, b;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    if (a > b)
    {
        int res = canInterchange(a, b);
        if (res)
            swap(&a, &b);
        else
            return 0;
    }

    printPrimeNo(a, b);
    return 0;
}

int canInterchange(int a, int b)
{
    int choice;

    printf("Do you want swap the number?\nPress '1' for continue or '0' for exit: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int isPrime(int n)
{
    if (n <= 1)
        return 0;

    if (n == 2)
        return 1;

    if (n % 2 == 0)
        return 0;

    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

void printPrimeNo(int a, int b)
{
    printf("Prime no. between %d & %d:\n", a, b);
    for (int i = (a > 2 ? a : 2); i < b; i++)
    {
        if (isPrime(i))
        {
            printf("%d, ", i);
        }
    }
}