// https://www.cs.emory.edu/~cheung/Courses/255/Syllabus/4-intro/memory.html

#include <stdio.h>
int main()
{
    int i = 72;                                             // integer
    int j = 723;                                            // integer
    printf("The adress of i and j is %u and %u\n", &i, &j); //%u is the format specifier for pointers.
    //&i and &j "address of"

    printf("The value of i and j is %d and %d", *(&i), *(&j));

    // int *j;
    // j= &i; // Integer pointer

    return 0;
}