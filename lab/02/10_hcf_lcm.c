#include<stdio.h>
//?  Write a program to calculate the LCM (Least Common Multiple) and HCF (Highest Common Factor) of two numbers.

int main()
{

    int num1, num2, a, b, hcf, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    a = num1;
    b = num2;

    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    hcf = a;

    lcm = (num1 * num2) / hcf;

    printf("HCF of %d & %d = %d\n",num1, num2, hcf);
    printf("LCM of %d & %d = %d\n",num1, num2, lcm);
    return 0;
}