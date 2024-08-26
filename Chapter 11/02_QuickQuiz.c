/*
Write a program to create a dynamic array of 5 floats using malloc().
*/

#include <stdio.h>
#include <malloc.h>

int main()
{
    float *ptr;
    // int n=5;
    ptr = (float *)malloc(5 * sizeof(float));
    ptr[0] = 3.5;
    ptr[1] = 4.36;
    ptr[2] = 7.7;
    ptr[4] = 8.9;
    ptr[5] = 2.1;

    printf("%f", ptr[2]);
    return 0;
}