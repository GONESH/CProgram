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