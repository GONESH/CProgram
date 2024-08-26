/*
WAP to calculate area of a rectangle
(a)--> Using hard coded input.
(b)--> Using input supplied from the user.
*/

#include<stdio.h>
int main()
{

    int a=3;
    int b=5;
    int area= a*b; // hard coded inputs
    printf("Enter the length:\n");
    scanf("%d",&a);

    printf("Enter the breadth:\n");
    scanf("%d",&b);

    printf("The area of a rectangle is %d\n",area);
    printf("The area of a rectangle is %d\n",a*b);
    return 0;
}