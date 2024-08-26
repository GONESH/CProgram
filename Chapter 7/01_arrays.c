// ARRAYS

#include <stdio.h>
int main()
{
    // int a[10];            // Integer array
    // char name[20];        // Character array
    // float percentile[90]; // float array

    // Store marks of 8 students
    int a1, a2, a3, a4, a5, a6, a7, a8;
    a1 = 45;
    a2 = 50;
    a3 = 65;
    a4 = 70;
    a5 = 63;
    a6 = 81;
    a7 = 78;
    a8 = 91;

    // Better way: Store marks of 8 student;
    int a[8];
    a[0] = 45;
    a[1] = 50;
    a[2] = 65;
    a[3] = 70;
    a[4] = 63;
    a[5] = 81;
    a[6] = 78;
    a[7] = 91;

    printf("The value of student number 0 is %d\n",a[0]);
    printf("The value of student number 1 is %d\n",a[1]);
    printf("The value of student number 2 is %d\n",a[2]);
    printf("The value of student number 3 is %d\n",a[3]);
    printf("The value of student number 4 is %d\n",a[4]);
    printf("The value of student number 5 is %d\n",a[5]);
    printf("The value of student number 6 is %d\n",a[6]);
    printf("The value of student number 7 is %d\n",a[7]);

    return 0;
}
