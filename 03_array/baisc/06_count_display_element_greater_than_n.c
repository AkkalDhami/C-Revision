#include <stdio.h>
/*
Print and count elements in array greater then the number n

    int arr[6] = { 1, 2, 3, 4, 5, 6 };
    int n= 3;
    greater then 3: 4, 5, 6, count: 3

    output:
    4, 5, 6
    count: 3
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
        if (arr[i] > max)
        {
            printf("%d, ", arr[i]);
            count++;
        }
    }

    printf("\nCount: %d", count);

    return 0;
}