#include <stdio.h>
/* 10. Write a C program to calculate simple interest using a user-defined function. */

float calculateSI(float p, float t, float r) {
    return (p * t * r) / 100;
}

int main() {
    float p, t, r;
    printf("Enter Principal, Time and Rate\n");
    scanf("%f %f %f", &p, &t, &r);
    printf("Simple Interest: %.2f\n", calculateSI(p, t, r));
    return 0;
}
