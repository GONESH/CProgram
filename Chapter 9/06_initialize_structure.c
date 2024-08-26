/*
Initializing a structure
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
    struct employee thapa = {1000, 45.1, "Thapa"}; // should follow the structure of employee - like salary, hike, name(In sequence)

    struct employee peter = {0}; // All elements set to zero
    printf("The name of the employee is %s\n", thapa.name);
    printf("The salary of the employee is %d\n", thapa.salary);
    printf("The hike of the employee is %f\n", thapa.hike);

    return 0;
}