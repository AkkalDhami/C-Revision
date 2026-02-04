#include <stdio.h>

int main()
{
    int n, product = 1;
    printf("Enter the length of array: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &arr[i]);
        product *= arr[i];
    }

    printf("Product of elements in array: %d", product);

    return 0;
}