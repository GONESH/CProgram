/*
WAP to find grade of a student given his marks based on below:
-90-100 ->A
-80-90 ->B
-70-80 ->C
-60-70->D

*/

#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100)
    {
        printf("Grade: A\n");
    }
    else if (marks >= 80 && marks < 90)
    {
        printf("Grade: B\n");
    }
    else if (marks >= 70 && marks < 80)
    {
        printf("Grade: C\n");
    }
    else if (marks >= 60 && marks <70)
    {
        printf("Grade: D\n");
    }
    else
    {
        printf("Grade: F\n");
    }

    return 0;
}