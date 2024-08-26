/*
WAP to find whether a year entered by the user is a leap year or not.
Take year as an input from the user
*/

#include <stdio.h>
/*
Every year that is exactly divisible by four is a leap year, 
except for years that are exactly divisible by 100, 
but these centurial years are leap years if they are exactly divisible by 400
If a year is divisible by 4, it's a leap year.
However, years that are divisible by 100 but not 400 are not leap years.
Years that are divisible by 100 and 400 are leap years.
*/
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    // if (year % 4 == 0)
    // {
    //     printf("It is leap year\n");
    // }
    // else
    // {
    //     printf("It is not leap year\n");
    // }
    if (year % 4 !=0)
    {
        printf("It is a common year");
    }
    else if (year % 100 !=0)
    {
        printf("It is a leap year");
    }
    else if (year % 400 !=0)
    {
        printf("It is commom year");
    }
    else
    {
        printf("It is a leap year");
    }
    
    return 0;
}