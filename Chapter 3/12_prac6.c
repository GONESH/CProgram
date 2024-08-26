/*
WAP to find a greatest of four numbers entered by the user
*/

#include <stdio.h>

int main()
{
    // int a = 1023;
    // int b = 222;
    // int c = 32;
    // int d = 4;

    // int a, b, c, d;

    // printf("enter first number\n");
    // scanf("%d", &a);

    // printf("enter second number\n");
    // scanf("%d", &b);

    // printf("enter third number\n");
    // scanf("%d", &c);

    // printf("enter fourth number\n");
    // scanf("%d", &d);

    // if ((a > b) && (a > c) && (a > d))
    // {
    //     printf(" largest is %d", a);
    // }

    // else if ((b > a) && (b > c) && (b > d))
    // {
    //     printf(" largest is %d", b);
    // }

    // else if ((c > a) && (c > b) && (c > d))
    // {
    //     printf(" largest is %d", c);
    // }

    // else
    // {
    //     printf("largest is %d", d);
    // }

    int num1, num2, num3, num4, greatest;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    // Find the greatest number
    greatest = num1;
    if (num2 > greatest) {
        greatest = num2;
    }
    if (num3 > greatest) {
        greatest = num3;
    }
    if (num4 > greatest) {
        greatest = num4;
    }

    // Print the greatest number
    printf("The greatest number is %d.\n", greatest);

    return 0;
}