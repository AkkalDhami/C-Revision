#include<stdio.h>
// Accept a month name or number from the user and display the number of days in that month.

int main()
{
    int m;
    printf("Enter a month no: ");
    scanf("%d", &m);

    switch (m)
    {
    case 1:
       printf("No of days: 31");
        break;
    case 2:
       printf("No of days: 28");
        break;
    
    case 3:
       printf("No of days: 31");
        break;
    
    case 4:
       printf("No of days: 30");
        break;
    
    case 5:
       printf("No of days: 31");
        break;
    
    case 6:
       printf("No of days: 30");
        break;
    
    case 7:
       printf("No of days: 31");
        break;
    
    case 8:
       printf("No of days: 31");
        break;
    
    case 9:
       printf("No of days: 31");
        break;
    
    case 10:
       printf("No of days: 31");
        break;
    
    case 11:
       printf("No of days: 31");
        break;
    
    case 12:
       printf("No of days: 31");
        break;
    
    default:
        break;
    }

    return 0;
}