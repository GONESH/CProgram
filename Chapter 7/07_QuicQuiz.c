/*
Operation in pointers:
1. Adding number to pointer
2. Subtracting number from pointer
3. Subtracting one point from another
4. Comparision of two pointer variables.

QuickQuiz- Try these operation on another variables by creating
pointers in a separate program. Demonstrate all four operations.
*/
#include <stdio.h>
int main()
{
    int i = 5;
    int *ptr = &i;
    printf("The value of i is %d\n", i);
    printf("The value of ptr is %u\n", *ptr);
    printf("The value of ptr is %u\n", ptr);
    printf("The address of ptr is %u\n", &ptr);
    printf("The address of i is %u\n", &i);

    //Adding of number to pointer
    // ptr++;
    // ptr = ptr + 1;
    // ptr = ptr + 2;

    //Subtration of a number from a pointer
    // ptr = ptr - 2;

    //Subtractio of one pointer from another
    // ptr = ptr - &i;

    // Comparision of two pointer variables
    // ptr = ptr - ptr2;
    // ptr = ptr + 2;


    printf("The value of ptr after ptr is incremented is %u\n", ptr);

    if (ptr>&i)
    {
        printf("ptr is greater than i\n");
    }
    else{
        printf("ptr is less than i\n");
    }
    
    //printf("The value of ptr after ptr is decrementing is %u\n", ptr);
    //printf("The value of ptr after subtrating one pointer from another is %d\n", ptr-&i);
    // printf("Comparing is %d\n", ptr-&i);
    //printf("The address of i after ptr is incremented is %u\n", &i);

    return 0;
}