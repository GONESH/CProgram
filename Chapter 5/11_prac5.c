// What will the following line produce in a c program;
// printf("%d %d %d\n", a, ++a, a++);

#include <stdio.h>
int main()
{
    int a=4;
    printf("%d %d %d\n", a, ++a, a++);
    // printf("%d %d %d\n", a++, ++a, a);
    return 0;
}
//4,5,5 - expected output
// 6 6 4 - the compiler take the argument from right to left and works.
// Details
// a++ - take the value and increment - initial it was 4 
// now after printing/ taking it will increment by 1 i.e 5
// ++a - increment the value and take it - initial it was 5
// now after printing/ taking it will increment by 1 i.e 6
// final a will simple print 6
// While printing the value goes from left-to-right.