/*
Create an array of 10 numbers. 
Verify using pointer arithmetic that (ptr+2) points to the third element 
where ptr is a pointer pointing to the first element of an array.
*/
#include<stdio.h>
int main ()
{
    int arr[10];
    arr[0]=7;
    arr[1]=8;
    arr[2]=9;

    int *ptr=arr; // int * ptr = &arr[0];
    printf("The value at ptr is %d\n", *ptr);
    ptr =ptr + 2;
    printf("The value at ptr after pointing %d\n", *ptr);
    return 0;
}