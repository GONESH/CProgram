/*
WAP with structures representing a complex number.
*/

#include<stdio.h>

struct complex
{
    float r;
    float c;
};

int main ()
{
    struct complex v1 = {1.1, 4.8};
    struct complex v2 = {11.5, 54.3};

    printf("%fi + %fj", v1.r,v1.c);
    printf("\n");
    printf("%fi + %fj", v2.r,v2.c);
    
    return 0;
}