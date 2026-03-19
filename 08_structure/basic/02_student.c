/*
    Student {
        name,
        rollNo,
        marks[5]
    }[5]

    ? Display student with total marks, grade according to %
*/

#include <stdio.h>

typedef struct
{
    char name[50];
    int rollNo;
    float marks[5];
    float totalMarks;
} S;

int main()
{
    int n = 2;
    const float MAX_SALARY = 50000.00;
    S e[n];

    
    for (int x = 0; x < n; x++)
    {
        printf("\nEnter name of student-%d: ", x + 1);
        scanf("%s", e[x].name);
        printf("Enter rollno of student-%d: ", x + 1);
        scanf("%d", &e[x].rollNo);
        

        for (int i = 0; i < 2; i++)
        {
            printf("Enter marks-%d of student-%d: ", i + 1, x + 1);
            scanf("%f", &e[x].marks);

            e[i].totalMarks += e[x].marks[i];
        }
    }

    for (int i = 0; i < n; i++)
    {

        float perc = e[i].totalMarks / 500 * 100;

        printf("\nStudent Details:\n");

        printf("Name: %s\n", e[i].name);
        printf("Rollno: %d\n", e[i].rollNo);
        printf("Percentage: %.3f\nTotal marks: %.2f\n", perc);
        printf("Total marks: %.2f\n", e[i].totalMarks);

        for (int j = 0; j < 2; j++)
        {
            printf("Marks-%d:  %.2f ", j + 1, e[i].marks[j]);
        }
    }

    return 0;
}