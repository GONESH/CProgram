
#include <stdio.h>

/* 
address of &
value at *
*/
int main()
{
    int i=72;
    int *j=&i; //*j stores the address of i

    printf("The address of i is %u\n", &i);
    printf("The address of i is %u\n", j);
    printf("The address of j is %u\n", &j);
    printf("The value of j is %d\n", *j);
    printf("The value of i is %d\n", i);

    // int *ch_ptr; // Pointer to integer
    // char *ch_ptr; //Pointer to character
    // float *ch_ptr; // Pointer to float



    return 0;
}