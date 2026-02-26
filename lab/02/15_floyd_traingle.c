#include <stdio.h>

//? Generate Floyd's Triangle

int main()
{
    int n;
    int num = 1;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}