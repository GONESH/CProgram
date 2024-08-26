/*
WAP to accept marks of five students in an array
and print them on screen
*/
#include<stdio.h>
int main ()
{
    // int marks[5],i;
    int marks1, marks2, marks3, marks4, marks5;
    printf("Enter the marks of five students\n");

    printf("Enter the marks of first students:\n");
    scanf("%d",&marks1);

    printf("Enter the marks of second students:\n");
    scanf("%d",&marks2);

    printf("Enter the marks of third students:\n");
    scanf("%d",&marks3);

    printf("Enter the marks of fourth students:\n");
    scanf("%d",&marks4);

    printf("Enter the marks of fifth students:\n");
    scanf("%d",&marks5);

    // printf("The entered marks of students are %d %d %d %d %d", marks1,marks2,marks3,marks4,marks5);
    printf("The marks scored by first student is %d\n", marks1);
    printf("The marks scored by second student is %d\n", marks2);
    printf("The marks scored by third student is %d\n", marks3);
    printf("The marks scored by fourth student is %d\n",marks4);
    printf("The marks scored by fifth student is %d\n", marks5);


return 0;
}