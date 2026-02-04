#include <stdio.h>
/*
Check given array is palindrome or not

    int arr[6] = { 1, 2, 3, 4, 5, 6};

    output:
    Given array is not palindrome
    ================================
    int arr[5] = { 1, 2, 3, 2, 1 };

    output:
    Given array is palindrome
*/

void optimisedPalindromeChecker(int arr[], int l)
{

    int i = 0, isPalin = 1;

    while (i < l / 2)
    {
        if (arr[i] != arr[l - i - 1])
        {
            isPalin = 0;
            break;
        }
        i++;
    }

    if (isPalin)
        printf("Given array is palindrome\n");
    else
        printf(" Given array is not palindrome\n");
}

int main()
{

    int n;
    printf("Enter the length of array: ");
    scanf("%d", &n);

    int arr[n], tempArr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    optimisedPalindromeChecker(arr, n);

    for (int i = 0; i < n; i++)
    {
        tempArr[i] = arr[i];
    }

    int i = 0, j = n - 1;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == tempArr[i])
        {
            printf("Given array is palindrome\n");
            break;
        }
        else
        {
            printf("Given array is not palindrome\n");
            break;
        }
    }

    return 0;
}