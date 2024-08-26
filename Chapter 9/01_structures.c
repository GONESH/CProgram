/*
Structures in C
*/

#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    int salary;
    float hike;
    char name[10];
};
int main()
{
    int a=45;
    struct employee thapa;

    // thapa.name="Thapa"; // will not work because expression must be modifiable value
    strcpy(thapa.name,"Thapa"); // will work
    thapa.salary=100000;
    thapa.code=1;
    thapa.hike=5.3;
    
    printf("The name of the employee is %s\n", thapa.name);
    printf("The salary of the employee is %d\n", thapa.salary);
    printf("The code of the employee is %d\n", thapa.code);
    printf("The hike of the employee is %f\n", thapa.hike);

    return 0;
}