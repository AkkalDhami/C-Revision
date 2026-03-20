#include<stdio.h>

int add(int*a, int*b){
    return *a + *b;
}

int main()
{
    int a, b;
    printf("Enter two no: ");
    scanf("%d %d", &a, &b);
    
    printf("Sum of %d & %d: %d",a, b, add(&a, &b));
    return 0;
}