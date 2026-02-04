#include <stdio.h>
#include <stdbool.h>
/*

*/

void linearSearch(int arr[], int l, int x)
{
    bool isTrue = false;
    int idx = 0;
    for (int i = 0; i < l; i++)
    {
        if (arr[i] == x)
        {
            isTrue = true;
            idx = i;
            break;
        }
    }

    if (isTrue)
        printf("%d is present in arr[%d]\n", x, idx);

    else
        printf("%d is not present in the array\n", x);
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

    int searchedNum = 4;
    linearSearch(arr, n, searchedNum);

    return 0;
}