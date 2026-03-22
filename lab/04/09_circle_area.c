#include <stdio.h>
#define PI 3.14159
/* 9. Write a C program to calculate the area of a circle using a function and #define PI. */

float calculateArea(float r) {
    return PI * r * r;
}

int main() {
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("Area of circle: %.2f\n", calculateArea(radius));
    return 0;
}
