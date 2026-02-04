#include <stdio.h>
/*
Find missing element in the array

    int arr[6] = { 1, 2, 4, 5, 6};

    output:
    Missing element: 3
*/

int main()
{

    int n;
    printf("Enter the length of array: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int sumOfArr = 0;
    for (int i = 0; i < n; i++)
    {
        sumOfArr += arr[i];
    }

    int sum = (n + 1) * (n + 2) / 2;

    printf("Missing element: %d", sum - sumOfArr);

    return 0;
}