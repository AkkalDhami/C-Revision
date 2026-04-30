#include <stdio.h>
/* 25. Write a program to implement a calculator using functions. */

float add(float a, float b) { return a + b; }
float sub(float a, float b) { return a - b; }
float mul(float a, float b) { return a * b; }
float div(float a, float b) { return a / b; }

int main() {
    float a, b;
    char op;
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two operands: ");
    scanf("%f %f", &a, &b);
    
    switch (op) {
        case '+': printf("%.2f\n", add(a, b)); break;
        case '-': printf("%.2f\n", sub(a, b)); break;
        case '*': printf("%.2f\n", mul(a, b)); break;
        case '/': 
            if (b != 0) printf("%.2f\n", div(a, b)); 
            else printf("Cannot divide by zero\n");
            break;
        default: printf("Invalid operator\n");
    }
    return 0;
}
