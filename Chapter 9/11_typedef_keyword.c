/*
typedef keywords
--to create an alias name for data types in c.
-- typedef is more commonly used with structures.
*/

#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int salary;
    float hike;
    char name[10];
}emp;
int main()
{
    int a = 45;
    emp thapa = {1000, 45.1, "Thapa"}; 
    emp *ptr = &thapa; 

    // struct employee peter = {0}; // All elements set to zero

    printf("The name of the employee is %s\n", thapa.name);
    printf("The salary of the employee is %d\n", thapa.salary);
    printf("The hike of the employee is %f\n", thapa.hike);
    printf("\n");

    printf("The name of the employee is %s\n", (*ptr).name);
    printf("The salary of the employee is %d\n", (*ptr).salary);
    printf("The hike of the employee is %f\n", (*ptr).hike);
    printf("\n");

    printf("The name of the employee is %s\n", ptr->name); // -> arrow operator
    printf("The salary of the employee is %d\n", ptr->salary);
    printf("The hike of the employee is %f\n", ptr->hike);
    printf("\n");

    return 0;
}