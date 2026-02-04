#include <stdio.h>

/**

 Change the value of all odd index elements to its second multiple and increment all even indexed by 10

    int arr[6] = { 1, 2, 3, 4, 5, 6 };

    odd index elements : 2, 4, 6; => element * 2;
    even index elements : 1, 3, 5; => element + 10;

    output: 11, 4, 13, 8, 15, 12
 */

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

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] += 10;
        }
        else
        {
            arr[i] *= 2;
        }
    }

    printf("Modified array elements: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}