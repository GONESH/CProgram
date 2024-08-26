/*
Pointer to structures
*/
#include <stdio.h>
#include <string.h>

/*
we define a structure employee with three members: 
id, name, and salary.
*/
struct employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    
    //We declare two variables emp1 and emp2 of type employee, 
   
    struct employee emp1, emp2;

    //and two pointers ptr1 and ptr2 of type struct employee *
    struct employee *ptr1, *ptr2;

    // Assign the address of emp1 to ptr1
    ptr1 = &emp1;

    // Assign the address of emp2 to ptr2
    ptr2 = &emp2;

    // Access the members of emp1 using ptr1
    ptr1->id = 101;
    strcpy(ptr1->name, "John Doe");
    ptr1->salary = 50000.0;

    // Access the members of emp2 using ptr2
    ptr2->id = 102;
    strcpy(ptr2->name, "Jane Doe");
    ptr2->salary = 60000.0;

    // Print the values of emp1 and emp2 using ptr1 and ptr2
    printf("Employee 1:\n");
    printf("ID: %d\n", ptr1->id);
    printf("Name: %s\n", ptr1->name);
    printf("Salary: %.2f\n", ptr1->salary);
    printf("\n");

    printf("Employee 2:\n");
    printf("ID: %d\n", ptr2->id);
    printf("Name: %s\n", ptr2->name);
    printf("Salary: %.2f\n", ptr2->salary);

    return 0;
}