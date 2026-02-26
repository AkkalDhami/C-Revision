//? Design and implement a robust, console-based Automated Teller Machine (ATM) System that utilizes persistent control structures and conditional branching to manage financial transactions.
#include <stdio.h>
#include <stdlib.h>

#define CORRECT_PIN 1234

int main()
{
    int pin, attempts = 0;
    double balance = 5000.00;
    int choice;
    double amount;

    printf("===== Welcome to ATM System =====\n");

    // ---- PIN Authentication ----
    while (attempts < 3)
    {
        printf("Enter your PIN: ");
        scanf("%d", &pin);

        if (pin == CORRECT_PIN)
        {
            printf("Authentication Successful.\n");
            break;
        }
        else
        {
            attempts++;
            printf("Incorrect PIN. Attempts left: %d\n", 3 - attempts);
        }
    }

    if (attempts == 3)
    {
        printf("Card Blocked. Too many failed attempts.\n");
        return 0;
    }

    // ---- ATM Menu (Persistent Loop) ----
    while (1)
    {
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Current Balance: Rs. %.2lf\n", balance);
            break;

        case 2:
            printf("Enter deposit amount: ");
            scanf("%lf", &amount);

            if (amount > 0)
            {
                balance += amount;
                printf("Deposit Successful.\n");
                printf("Updated Balance: Rs. %.2lf\n", balance);
            }
            else
            {
                printf("Invalid amount.\n");
            }
            break;

        case 3:
            printf("Enter withdrawal amount: ");
            scanf("%lf", &amount);

            if (amount <= 0)
            {
                printf("Invalid amount.\n");
            }
            else if (amount > balance)
            {
                printf("Insufficient balance.\n");
            }
            else
            {
                balance -= amount;
                printf("Withdrawal Successful.\n");
                printf("Remaining Balance: Rs. %.2lf\n", balance);
            }
            break;

        case 4:
            printf("Thank you for using the ATM.\n");
            exit(0);

        default:
            printf("Invalid selection. Try again.\n");
        }
    }

    return 0;
}