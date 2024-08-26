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
    struct employee facebook[3];
    printf("Enter the details for Employee1\n");

    printf("Enter name\n");
    scanf("%s", facebook[0].name);

    printf("Enter salary\n");
    scanf("%d", &facebook[0].salary);

    printf("Enter hike\n");
    scanf("%f", &facebook[0].hike);
    // scanf("%d%f%s",&facebook[0].salary,&facebook[0].hike,facebook[0].name);

    printf("Enter the details for Employee2\n");

    printf("Enter name\n");
    scanf("%s", facebook[1].name);

    printf("Enter salary\n");
    scanf("%d", &facebook[1].salary);

    printf("Enter hike\n");
    scanf("%f", &facebook[1].hike);

    printf("Enter the details for Employee3\n");

    printf("Enter name\n");
    scanf("%s", facebook[2].name);

    printf("Enter salary\n");
    scanf("%d", &facebook[2].salary);

    printf("Enter hike\n");
    scanf("%f", &facebook[2].hike);

    printf("The name of the employee is %s\n", facebook[0].name);
    printf("The salary of the %s is %d\n", facebook[0].name, facebook[0].salary);
    printf("The hike of the %s is %f\n", facebook[0].name, facebook[0].hike);
    printf("\n");

    printf("The name of the employee is %s\n", facebook[1].name);
    printf("The salary of the %s is %d\n", facebook[1].name, facebook[1].salary);
    printf("The hike of the %s is %f\n", facebook[1].name, facebook[1].hike);
    printf("\n");

    printf("The name of the employee is %s\n", facebook[2].name);
    printf("The salary of the %s is %d\n", facebook[2].name, facebook[2].salary);
    printf("The hike of the %s is %f\n", facebook[2].name, facebook[2].hike);
    printf("\n");
    return 0;
}

/*
DRY Principle

#include <stdio.h>

struct employee
{
    char name[10];
    int salary;
    float hike;
};
void printDetails(struct employee e1)
{
    printf("The name of the employee is %s\n", e1.name);
    printf("The salary of the %s is %d\n", e1.name, e1.salary);
    printf("The hike of the %s is %f\n", e1.name, e1.hike);
    printf("\n");
}
int main()
{
    // int a = 45;
    struct employee emp[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the details for Employee %d\n",i+1);
        for (int j = i; j <= i; j++)
        {
            printf("Enter name\n");
            scanf("%s", emp[i].name);

            printf("Enter salary\n");
            scanf("%d", &emp[i].salary);

            printf("Enter hike\n");
            scanf("%f", &emp[i].hike);
        }
    }

    // printf("Enter the details for Employee1\n");

    // printf("Enter name\n");
    // scanf("%s", emp[0].name);
    printDetails(emp[0]);
    printDetails(emp[1]);
    printDetails(emp[2]);

    return 0;
}
*/