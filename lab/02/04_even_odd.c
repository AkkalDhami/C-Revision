#include<stdio.h>

int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    if(n & 1) printf("%d is odd no.", n);
    else printf("%d is even no.", n);
    return 0;
}