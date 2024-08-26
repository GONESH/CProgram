#include <stdio.h>

int sum(int, int, int);

int main()
{
    int a = 6;
    int b = 44;
    int c = 19;
    printf("The sum of a and b is %d\n", sum(a, b, c));
    printf("The Value of c is %d", c);

    return 0;
}

int sum(int a, int b, int c)
{
    c = 9;
    return a + b;
}
/*
If the passed  variable/parameters is changed inside the function, the function call
doesn't change the value in the calling function.
*/