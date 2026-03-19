// Employee {
//     name, address, salary;
// }
// [10];

//? display those employees whose name start with 'a' and salary is > 50,000

#include <stdio.h>
// #define MAX_SALARY 50000;

typedef struct
{
    char name[50], address[0];
    float salary;
} E;

int main()
{
    int n = 2;
    const float MAX_SALARY = 50000.00;
    E e[n];
    for (int x = 0; x < n; x++)
    {
        printf("\nEnter name of employee-%d: ", x + 1);
        scanf("%s", e[x].name);
        printf("Enter address of employee-%d: ", x + 1);
        scanf("%s", e[x].address);
        printf("Enter salary of employee-%d: ", x + 1);
        scanf("%f", &e[x].salary);
    }

    for (int i = 0; i < n; i++)
    {
        if (e[i].salary > MAX_SALARY && (e[i].name[0] == 'a' || e[i].name[0] == 'A'))
        {
            printf("\nEmployee Details:\n");
            printf("Name: %s\nAddress: %s\nSalary: %.3f\n", e[i].name, e[i].address, e[i].salary);
        }
    }

    return 0;
}