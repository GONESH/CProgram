/*
WAP to print the value of a variable i by using
"pointers to pointer" type of variable.
*/

#include <stdio.h>
int main()
{
    int i = 10;
    int *p = &i;
    int **q = &p;
    printf("Value of i is %d\n", i);
    printf("Value of i is %d\n", *p);
    printf("Value of i is %d\n", **q);

    printf("Address of i is %d\n", *(&i));
    printf("Address of i is %d\n", *(&p)); // address
    printf("Address of i is %d\n", **(&p));

    printf("Address of i is %d\n", &i);
    printf("Address of i is %d\n", &p); // address
    printf("Address of i is %d\n", &q);


    return 0;
}