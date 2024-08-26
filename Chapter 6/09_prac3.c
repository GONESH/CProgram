/*
WAP to change the value of a variable to ten times of its current value.
write a function and pass the value by reference.
*/
#include <stdio.h>
void change(int *);

int main()
{
    int i = 6;
    printf("The value if i before change ran is %d\n", i);
    change(&i);
    printf("The value if i after change ran is %d\n", i);

    return 0;
}

void change(int *ptr){
    //printf("The value of address ptr from function is %u\n", ptr);
    *ptr = *ptr * 10;
}