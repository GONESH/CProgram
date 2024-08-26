/*
WAP to change the value of a variable to ten times of its current value.
write a function and pass the by call by value.
*/
#include <stdio.h>
void change(int);

int main()
{
    int i = 6;
    printf("The value if i before change ran is %d\n", i);
    change(i);
    printf("The value if i after change ran is %d\n", i);

    return 0;
}

void change(int i){
    //printf("The value of address ptr from function is %u\n", ptr);
    // *ptr = *ptr * 10;
    i = i * 10;
}
/*
Suppose you have two iphone
you gave one to your friend
and your friend broke the iphone
that doesn't mean your iphone will get broken too
Therefore, If the variable value is declared in call funtion;
Say change(), then it doesnt change the values in main() function
In order to change we use call by reference which we use address to change the value.
*/