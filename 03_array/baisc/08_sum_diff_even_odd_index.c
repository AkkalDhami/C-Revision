#include <stdio.h>
/*
Print sum of even index elements - sum of odd index elements

    int arr[4] = { 1, 2, 3, 4};

    output: (1+3) - (2+4) = -2
*/

int main()
{

    int n, count = 0, max = 3;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    int sumEven = 0, sumOdd = 0;

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sumEven += arr[i];
        }
        else
        {
            sumOdd += arr[i];
        }
    }
    printf("Difference %d & %d : %d", sumEven, sumOdd, sumEven - sumOdd);

    return 0;
}