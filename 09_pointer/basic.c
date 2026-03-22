//? pointer: a variable that store the address of another variable.

//? A null pointer is a pointer that doesnot point to any valid memory location

//? A void pointer (void*) can hold the address of any data type, but it cannot deferenced directly. It must be typecast before dereferencing

#include <stdio.h>

int main()
{
    int a = 1;
    int *p = &a;
    void *p2 = &a;


    printf("address of a: %p\n", p);          //? 0061FF18
    printf("address of a: %p\n", (void *)p2); //? 0061FF18
    printf("address of a: %p\n", &a);         //? 0061FF18

    printf("value of a: %d\n", a);  //? 1
    printf("value of a: %d\n", *p); //? 1

    return 0;
}