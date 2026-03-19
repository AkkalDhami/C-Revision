#include <stdio.h>
#include <string.h>

struct Student
{
    int rollNo;
    char name[50];
    float gpa;
};

typedef struct
{
    int rollNo;
    char name[50];
    float gpa;
} S;

int main()
{
    struct Student s1;
    S s2 = {2, "Akkal", 3.4};

    //? => Overwrite Original
    // s2.gpa = 3.4;
    // s2.rollNo = 2;
    // strcpy(s2.name, "Aavash");

    printf("Enter roll no, name, and gpa: ");
    scanf("%d%[^\n]%f", &s1.rollNo, s1.name, &s1.gpa);

    printf("Name: %s, Rollno: %d, GPA: %.2f\n", s1.name, s1.rollNo, s1.gpa);
    printf("Name: %s, Rollno: %d, GPA: %.2f\n", s2.name, s2.rollNo, s2.gpa);

    return 0;
}