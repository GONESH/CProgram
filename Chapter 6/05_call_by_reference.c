
#include <stdio.h>
int sum(int *, int *);

int main()
{
    // int a, b;
    int x = 5;
    int y = 4;
    // printf("The Sum of a + b is %d\n",sum(3, 5));
    printf("The Sum of x + y is %d\n", sum(&x, &y));
    printf("The value of x and y is %d and %d", x, y);

    return 0;
}

int sum(int *a, int *b) // now a,b are address
{
    *a = 56;
    return *a + *b;
}

/*
Call by reference
Here, address of the variables is passed to the function as arguments
-Sending the address of arguments
-Changes made to the arguments in the function will be reflected in the calling function.
output-
-pointer *a=56 in sum() function
-pointer *a value is passed into main() function where initiallly x = 5, 
-Now, x=56 
- Printf() in main() sum of x + y = 56 + 4 =60
-prinf() values in main() x=56, y=4
So the final output is:
The Sum of x + y is 60
The value of x and y is 56 and 4

Notes:
1. Since the adress are passed to the function the function can now modify the value of variable
in calling function using * and & operators
*/