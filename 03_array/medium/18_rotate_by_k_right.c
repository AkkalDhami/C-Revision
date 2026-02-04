#include <stdio.h>
/*
Rotate array by k steps (right)

    int arr[6] = {1, 2, 3, 4, 5, 6};
    int k = 2;

    5, 6 => put at front
    output:
    5, 6, 1, 2, 3, 4
*/

void reverse(int arr[], int a, int b)
{
    int i = a, j = b - 1;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main()
{

    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int k;
    printf("Enter, how many steps you want to rotate? ");
    scanf("%d", &k);

    printf("Original Array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    
    reverse(arr, 0, n);
    reverse(arr, 0, k);
    reverse(arr, k, n);

    printf("\nRotating Array(Right) by %d steps:\n", k);
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}