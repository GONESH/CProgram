/*
Passing Structure to a function.
void show (struct employee); ---> function prototype
QuickQuiz:
Complete this show function to display the content of employee
*/
#include <stdio.h>

struct employee
{
    int salary;
    float hike;
    char name[10];
};
void show(struct employee e)
{
    e.name[0]='P';
    printf("The name of the employee is %s\n", e.name);
    printf("The salary of the employee is %d\n", e.salary);
    printf("The hike of the employee is %f\n", e.hike);
    e.hike = 4.55;
    printf("\n");
}

void showref(struct employee *e)
{
    (*e).name[0]='P';
    printf("The name of the employee is %s\n", e->name);
    printf("The salary of the employee is %d\n", e->salary);
    printf("The hike of the employee is %f\n", e->hike);
    (*e).hike = 4.55;
    printf("\n");
}
int main()
{
    struct employee thapa = {1000, 45.1, "Thapa"};
    // show(thapa);
    showref(&thapa);
    printf("The name of the employee is %s\n", thapa.name);
    printf("The salary of the employee is %d\n", thapa.salary);
    printf("The hike of the employee is %f\n", thapa.hike);
    return 0;
}