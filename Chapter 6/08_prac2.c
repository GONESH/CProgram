/*
WAP having a variable i. Print the address of i. 
Pass the variable to a function
and print its address
Are these addresses same? Why?
// Answer- Yes because the main() and userdefined function calls the same variable.
*/
#include <stdio.h>

void func(int *);

int main()
{
    int i = 3;
    func(&i);
    printf("The address if i is %u\n", &i);

    printf("The value if i is %d\n", *(&i));

    return 0;
}

void func(int *ptr)
{
    printf("The value of address ptr from function is %u\n", ptr);
}