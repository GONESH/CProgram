/*
WAP to find out whether a student is passed or fail;
if it required total 40% amd atleast 33% in each subject to pass.
Assume 3 subjects and take marks as an input from the user.
*/

#include <stdio.h>
int main()
{
    // int a=45;
    // int b=60;
    // int c=70;
    int marks1, marks2, marks3;

    printf("Enter marks of first subject:\n");
    scanf("%d", &marks1);

    printf("Enter marks of second subject:\n");
    scanf("%d", &marks2);

    printf("Enter marks of third subject:\n");
    scanf("%d", &marks3);

    float total = (marks1 + marks2 + marks3) / 3;

    if (total >= 40)
    {
        if (marks1 < 33 || marks2 < 33 || marks3 < 33)
        {
            printf("Sorry you are not qualify because one of your subject marks is less than 33%% %f", total);
        }
        else{
            printf("Congratulation you are qualify because your total marks is %f", total);
        }
    }
    else
    {
        printf("Sorry you failed to qualify because your total is less than 40%%\n");
    }

    // if (a>40 && b>40 && c>40)
    // {
    //     printf("Pass");
    // }
    // else
    // {
    //     printf("Fail");
    // }

    return 0;
}