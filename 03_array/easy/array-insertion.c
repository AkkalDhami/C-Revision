#include <stdio.h>

int insertion(int arr[], int totalSize, int currSize, int num, int idx)
{
    if (totalSize <= currSize)
    {
        printf("Invalid array size!\n");
        return 0;
    }

    for (int i = totalSize - 1; i >= idx; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[idx] = num;
    return 1;
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{

    int arr[10] = {1, 2, 3, 4, 5, 6};
    int totalSize = sizeof(arr) / sizeof(arr[0]);
    int currentSize = 6;
    int num = 7;
    int idx = 4;
    insertion(arr, totalSize, currentSize, num, idx);
    currentSize++;
    printArray(arr, currentSize);

    return 0;
}