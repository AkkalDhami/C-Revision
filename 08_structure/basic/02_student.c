/*
    Student {
        name,
        rollNo,
        marks[5]
    }[5]
    ? Display student with total marks, grade according to %
*/

#include <stdio.h>
#define FULL_MARKS 200

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
    S e[n];

    for (int i = 0; i < n; i++)
    {
        e[i].totalMarks = 0;
    }

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter name of student-%d: ", i + 1);
        scanf("%s", e[i].name);
        printf("Enter rollno of student-%d: ", i + 1);
        scanf("%d", &e[i].rollNo);

        for (int j = 0; j < 2; j++)
        {
            printf("Enter marks-%d of student-%d: ", j + 1, i + 1);
            scanf("%f", &e[i].marks[j]);
            e[i].totalMarks += e[i].marks[j];
        }
    }

    for (int i = 0; i < n; i++)
    {

        float perc = (e[i].totalMarks / FULL_MARKS) * 100;

        printf("\nStudent Details:\n");

        printf("Name: %s\n", e[i].name);
        printf("Rollno: %d\n", e[i].rollNo);
        printf("Percentage: %.3f%\n", perc);
        printf("Total marks out of %d: %.2f\n", FULL_MARKS, e[i].totalMarks);

        for (int j = 0; j < 2; j++)
        {
            printf("Marks-%d: %.2f\n", j + 1, e[i].marks[j]);
        }
    }

    return 0;
}