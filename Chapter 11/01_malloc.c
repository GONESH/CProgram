/*
malloc - memory allocation.
It takes number of bytes to be allowed as an input and returns a pointer of type void.
*/
#include <stdio.h>
#include <malloc.h>

int main()
{
    int *ptr;
    int n;
    scanf("%d",&n);
    ptr = (int *)malloc(n * sizeof(int));
    /*
    (int *)- casting void pointer to int
    n- space for n integer
    sizeof(int) return size of 1 int
    */
    ptr[0] = 35;
    ptr[1] = 36;
    ptr[2] = 37;
    ptr[4] = 38;

    printf("%d", ptr[2]);
    return 0;
}