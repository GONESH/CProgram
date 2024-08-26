/*
Continuous allocation
Initialize each memory block with a default value of 6.
*/

#include <stdio.h>
#include <malloc.h>

int main()
{
    float *ptr;

    ptr = (float *)calloc(30, sizeof(float));
    ptr[0] = 3.5;
    ptr[1] = 3.6;
    ptr[2] = 3.7;
    ptr[4] = 3.8;

    printf("%f", ptr[2]);
    return 0;
}
