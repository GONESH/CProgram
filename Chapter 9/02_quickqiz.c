/*
WAP to store the details of 3 employess from user define data.
Use the structure declared above.
*/

#include <stdio.h>
#include <string.h>

struct employee
{
    int salary;
    float hike;
    char name[10];
};
int main()
{
    int a = 45;
    struct employee thapa, peter, john;
    printf("Enter the details for Employee1\n");

    printf("Enter name\n");
    scanf("%s", thapa.name);

    printf("Enter salary\n");
    scanf("%d", &thapa.salary);

    printf("Enter hike\n");
    scanf("%f", &thapa.hike);
    // scanf("%d%f%s",&thapa.salary,&thapa.hike,thapa.name);

    printf("Enter the details for Employee2\n");

    printf("Enter name\n");
    scanf("%s", peter.name);

    printf("Enter salary\n");
    scanf("%d", &peter.salary);

    printf("Enter hike\n");
    scanf("%f", &peter.hike);

    printf("Enter the details for Employee3\n");

    printf("Enter name\n");
    scanf("%s", john.name);

    printf("Enter salary\n");
    scanf("%d", &john.salary);

    printf("Enter hike\n");
    scanf("%f", &john.hike);

    printf("The name of the employee is %s\n", thapa.name);
    printf("The salary of the %s is %d\n", thapa.name, thapa.salary);
    printf("The hike of the %s is %f\n", thapa.name, thapa.hike);
    printf("\n");

    printf("The name of the employee is %s\n", peter.name);
    printf("The salary of the %s is %d\n", peter.name, peter.salary);
    printf("The hike of the %s is %f\n", peter.name, peter.hike);
    printf("\n");

    printf("The name of the employee is %s\n", john.name);
    printf("The salary of the %s is %d\n", john.name, john.salary);
    printf("The hike of the %s is %f\n", john.name, john.hike);
    printf("\n");
    return 0;
}