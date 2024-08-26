#include <stdio.h>

int sum(int , int ); //Function Prototype

int main()
{
    //printf("The value of 5 + 7 is %d", sum(5,7)); //Function call
    int d=sum(2,5);
    printf("The value is %d", d);
    return 0;
}

// Function Difination
int sum (int a, int b){ 
    // return a + b;
    int c;
    c = a + b;
    return c;
}
/*
Parameters - values or variables placeholder in function definition Ex: a & b
Arguments - actual values passed to the function to make a call Eg: 2 & 3
*/