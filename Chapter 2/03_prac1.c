/* 
Which of the following is invalid in C?

(i)-- int a, int =b --invalid since type of b is not declared
(ii)-- int v=3^3; -- valid since ^ give power to 3
(iii)-- char dt= '21 Dec 2020- incvalid since too many charater in constant
*/

#include<stdio.h>
int main()
{
    // int a;
    // b=a;
    // int v=3^3;
    // There are four major data types in C
    // 1. int - for storing integers
    // 2. float - single precision floating point number.
    // 3. double - double precision floating point number.
    // 4. char - storing character enclosed in ') "A" is invalid

    int a= 3^3;
    //char dt= '21 Dec 2020'; // too many character in constant
    return 0;
}