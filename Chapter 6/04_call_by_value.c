
#include <stdio.h>
int sum(int, int);

int main()
{
    // int a, b;
    int x=5;
    int y=4;
    printf("The Sum of a + b is %d\n",sum(3, 5));
    printf("The Sum of x + y is %d\n",sum(x,y));
    printf("The value of x and y is %d and %d",x,y);

    return 0;
}

int sum(int a, int b)
{
    a=56;
    return a + b;
}
/*
Call by value- sending values of arguments
above example-
 - output
 The Sum of a + b is 60
 -a in declare as 56 in function sum()
 -b in declare as 5 in function sum() at printf
 The Sum of a + b is 61
 -a in declare as 56 in function sum()- so now x will copy a=56 ignoring x=5 in main()
 -y in declare as 4 in main() function
 -x=56 + y=4 -i.e x + y=60
 The value of x and y is 5 and 4
 -x=5 in main() function
 -y=4 in main() function
 -So the values from main function will not change
*/