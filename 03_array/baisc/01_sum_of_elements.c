#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter the length of array: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of elements in array: %d", sum);

    return 0;
}