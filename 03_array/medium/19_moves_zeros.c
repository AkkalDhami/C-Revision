#include <stdio.h>

void moveZeroes(int *arr, int len)
{
    int nonzero = 0;

    for (int i = 0; i < len; i++)
    {
        if (arr[i] != 0)
        {
            int temp = arr[i];
            arr[i] = arr[nonzero];
            arr[nonzero] = temp;
            nonzero++;
        }
    }

    printf("Output:\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d, ", arr[i]);
    }
}

int main()
{
    int arr[5] = {0, 1, 0, 3, 12};
    moveZeroes(arr, 5);
    return 0;
}