#include <stdio.h>
/*
Print fizz if elements of array are exactly divisible by 3, print buzz if elements of array are exactly divisible by 5 and print fizzbuzz if elements of array are exactly divisible by 3 and 5

    int arr[6] = { 3, 6, 7, 9, 10, 15};

    output: fizz, fizz, fizz, buzz, fizzbuzz
*/

int main()
{

    int n, count = 0, max = 3;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 3 == 0 && arr[i] % 5 == 0)
        {
            printf("fizzbuzz, ");
        }
        else if (arr[i] % 3 == 0)
        {
            printf("fizz, ");
        }
        else if (arr[i] % 5 == 0)
        {
            printf("buzz, ");
        }
        }

    return 0;
}