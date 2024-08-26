/*
 Calculate the area of a circle and modify the 
 same program to calculate the volume of a cylinder 
 given its value and height.
 */

#include<stdio.h>
int main()
{
    int r=2;
    int R;
    printf("Enter the radius of a Circle:\n");
    scanf("%d", &R);
    int h=5;
    int H;
    printf("Enter the height of a cylinder:\n");
    scanf("%d",&H);
    //printf("The area of a circle is: %f", 3.14*r*r);
    printf("The area of a circle is: %f\n", 3.14*R*R);

    printf("The volume of a cylinder is: %f\n", 3.14*R*R*H);

    return 0;
}