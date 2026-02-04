#include <stdio.h>
/*
Rotate array by k positions (left)

    int arr[6] = {1, 2, 3, 4, 5, 6};
    int k = 2;

    output:
    3, 4, 5, 6, 1, 2
*/

void rotateByK(int arr[], int l, int k)
{
    int firstIdx = arr[0];
    int tempArr[l];
    for (int i = 0; i < l; i++)
    {
        tempArr[i] = arr[i];
    }

    k = k % l;
    for (int i = 0; i < l; i++)
    {
        tempArr[i] = arr[(i + k) % l];
    }

    printf("\nRotating array(Left) by %d steps:\n", k);
    for (int i = 0; i < l; i++)
    {
        printf("%d, ", tempArr[i]);
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

    rotateByK(arr, n, k);

    return 0;
}