#include <stdio.h>

int main()
{
    float m[5], totalMarks = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks(/100) of subject-%d: ", i + 1);
        scanf("%f", &m[i]);
        totalMarks += m[i];
    }

    float percent = (totalMarks / 500) * 100;

    if (percent >= 90 && percent < 100)
    {
        printf("Distinction\n");
    }
    else if (percent >= 80 && percent < 90)
    {
        printf("First division\n");
    }
    else if (percent >= 60 && percent < 80)
    {
        printf("Second division\n");
    }
    else if (percent >= 40 && percent < 60)
    {
        printf("Third division\n");
    }
    else if (percent >= 0 && percent < 40)
    {
        printf("Fail\n");
    }
    else
    {
        printf("Invalid percentage!");
    }

    printf("Program executed by Akkal Dhami\n");
    return 0;
}