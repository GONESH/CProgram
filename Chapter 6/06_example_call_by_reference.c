
#include <stdio.h>

void swap(int, int);      // swapping in swap() function
void swap2(int *, int *); // swapping in main() function

int main()
{
    int a = 5;
    int b = 7;
    printf("The value of a and b before changing is %d and %d \n", a, b);
    // swap(a, b);
    swap2(&a, &b);
    printf("The value of a and b after changing is %d and %d \n", a, b);
    return 0;
}


void swap(int a, int b)
{
    // printf("The value of a and b before changing is %d and %d \n",a,b);
    int temp;
    temp = a; // a=5, temp=5, b=7
    a = b;    // a=7, temp=5 , b=7
    b = temp; // a=7, temp=7, b=5
    // printf("The value of a and b before changing is %d and %d \n",a,b);
}

void swap2(int *aptr, int *bptr)
{
    // printf("The value of a and b before changing is %d and %d \n",a,b);
    int temp;
    temp = *aptr; // a=5, temp=5, b=7
    *aptr = *bptr;    // a=7, temp=5 , b=7
    *bptr = temp; // a=7, temp=7, b=5
    // printf("The value of a and b before changing is %d and %d \n",a,b);
}
/*
We cannot change the value of a and b in main() function
to do that we need addresses of a and b
*/