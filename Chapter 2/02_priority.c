#include <stdio.h>

int main()
{
    //int a= 9+3*5-5;
    //printf("%d",a);
    
    int b= 9/3*27-5;
    // *,/ follows left to right
    /*i.e:
    9/3=3
    3*27=81
    81-5=76
    */ 
    /*
    1st -- * / %
    2nd -- + -
    3rd -- =
    */
    printf("%d",b);

    return 0;
}