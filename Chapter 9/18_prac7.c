/*
WAP with structures representing a complex number using typedef keyword
*/

#include <stdio.h>

typedef struct {
    float r;
    float c;
} complex;

int main() {
    complex v1 = {1.1, 4.8};
    complex v2 = {11.5, 54.3};

    printf("%fi + %fj\n", v1.r, v1.c);
    printf("%fi + %fj\n", v2.r, v2.c);

    return 0;
}

/*
we've used the typedef keyword to define a type alias complex for the struct keyword. 
This allows us to declare variables of type complex without using the struct keyword.

We've also added a newline character \n to the end of each printf statement to print each complex number on a separate line.

With these changes, 
the program will now define a type alias complex for the struct keyword and declare two variables v1 and v2 of type complex. 
The program will then print the values of v1 and v2 using the printf function.
*/