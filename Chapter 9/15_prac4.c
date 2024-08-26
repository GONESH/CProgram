/*
WAP to illustrate the use of arrow operators.
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
    struct employee thapa = {1000, 45.1, "Thapa"}; 
    struct employee *ptr = &thapa; 

    printf("The name of the employee is %s\n", ptr->name); // -> arrow operator
    printf("The salary of the employee is %d\n", ptr->salary);
    printf("The hike of the employee is %f\n", ptr->hike);
    printf("\n");

    return 0;
}