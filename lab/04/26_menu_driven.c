#include <stdio.h>
/* 26. Write a menu-driven program using functions. */

void option1() { printf("You selected Option 1\n"); }
void option2() { printf("You selected Option 2\n"); }

int main() {
    int choice;
    do {
        printf("1. Option 1\n2. Option 2\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: option1(); break;
            case 2: option2(); break;
            case 3: printf("Exiting...\n"); break;
            default: printf("Invalid choice\n");
        }
    } while (choice != 3);
    return 0;
}
