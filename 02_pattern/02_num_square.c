#include <stdio.h>

int main()
{
    //? 1. Take num from user
    //? 2. Print on the basis of num;
    /*
    ? n => 4
    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4
    */

    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    printf("\n");
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            printf("%d ", j + 1);
        }
        printf("\n");
    }

    return 0;
}