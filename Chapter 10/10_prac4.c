/*
Take name and salary of two employees as input
from the user and write them to a text file
in the following format:
name1, 3300
name2, 7700
*/
#include <stdio.h>
int main()
{
    char name1[12];
    int salary1;
    char name2[12];
    int salary2;
    FILE *fp;
    printf("Enter the value of salary 1\n");
    scanf("%d", &salary1);

    printf("Enter the value of name 1\n");
    scanf("%s", &name1);

    // printf("%d %s", salary1, name1);

    printf("Enter the value of salary 2\n");
    scanf("%d", &salary2);

    printf("Enter the value of name 2\n");
    scanf("%s", &name2);

    // printf("%d %s", salary2, name2);

    fp = fopen("10_prac4.txt", "w");
    fprintf(fp, " %s,%d\n", name1, salary1);
    fprintf(fp, " %s,%d", name2, salary2);

    return 0;
}