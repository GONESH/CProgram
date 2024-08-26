/*
Implementing 02_Quixk_qiz.c using DRY principle
DRY-Do Not Repeat Yourself
*/

#include <stdio.h>
#include <string.h>

struct employee
{
    int salary;
    float hike;
    char name[10];
};

void printEmployeeDetails(struct employee emp) {
    printf("The name of the employee is %s\n", emp.name);
    printf("The salary of the %s is %d\n", emp.name, emp.salary);
    printf("The hike of the %s is %f\n", emp.name, emp.hike);
    printf("\n");
}

int main() {
    int a = 45;
    struct employee thapa, peter, john;

    printf("Enter the details for Employee1\n");

    printf("Enter name\n");
    scanf("%s", thapa.name);
    // fgets(thapa.name, sizeof(thapa.name), stdin);

    printf("Enter salary\n");
    scanf("%d", &thapa.salary);

    printf("Enter hike\n");
    scanf("%f", &thapa.hike);

    printf("Enter the details for Employee2\n");

    printf("Enter name\n");
    scanf("%s", peter.name);
    // fgets(peter.name, sizeof(peter.name), stdin);

    printf("Enter salary\n");
    scanf("%d", &peter.salary);

    printf("Enter hike\n");
    scanf("%f", &peter.hike);

    printf("Enter the details for Employee3\n");

    printf("Enter name\n");
    scanf("%s", john.name);
    // fgets(john.name, sizeof(john.name), stdin);

    printf("Enter salary\n");
    scanf("%d", &john.salary);

    printf("Enter hike\n");
    scanf("%f", &john.hike);

    // Print the employee details using the printEmployeeDetails function
    printEmployeeDetails(thapa);
    printEmployeeDetails(peter);
    printEmployeeDetails(john);

    return 0;
}
/*
In this modified code, the printEmployeeDetails function is defined to print the employee details, 
and it is called three times in the main function to print the details of the three employees. 
This follows the DRY principle.

The main function takes user input for the employee details using the scanf function, 
and then calls the printEmployeeDetails function to print the employee details.

Note that the scanf function with the format specifier %s only reads a word (a sequence of non-whitespace characters) from the input. 
If you want to read a whole line (including spaces) from the input, you can use the fgets function instead. 

For example:
fgets(thapa.name, sizeof(thapa.name), stdin);
This will read a line from the input and store it in the thapa.name array, including any spaces. 
The sizeof operator is used to specify the size of the thapa.name array. 
The stdin argument is a predefined file pointer that represents the standard input stream.
*/