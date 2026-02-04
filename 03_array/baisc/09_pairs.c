#include <stdio.h>
/*
Find the total no. of pairs in the array whose sum = x;

    int arr[6] = { 1, 2, 3, 4, 5, 6};
    int x = 6;

    pairs:  (1, 5), (2, 4)
    Total Pairs = 2
*/

int main()
{

    int n, x = 6, count = 0;
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
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                printf("Pair found (%d, %d)\n", arr[i], arr[j]);
                count++;
            }
        }
    }

    printf("Total Pairs: %d", count);

    return 0;
}