#include <stdio.h>
/*
Find second largest element in the array

    int arr[6] = { 1, 2, 3, 4, 5, 6};

    output:
    Second largest element: 5
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

    int max = arr[0], smax = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            smax = max;
            max = arr[i];
        }
        else if (arr[i] > smax && arr[i] != max)
        {
            smax = arr[i];
        }
    }

    printf("Second largest element: %d", smax);

    return 0;
}