// Write a function to calculate force of attraction on a body of mass m exerted by earth.
//  g= 9.8 m/s^2

// #include <stdio.h>
// #include <math.h>
// const double gravity_constant = 6.673;
// void force_calculate(double a, double b, double c, double d);
// void input(double *a, double *b, double *c);
// void display(double a, double b, double c, double d);
// int main(int argc, char * argv[])
// {
//     double mass_1 = 0;
//     double mass_2 = 0;
//     double distance = 0;
//     double force = 0;

//     input(&mass_1, &mass_2, &distance);
//     force = force_calculate(mass_1, mass_2, distance, force);
//     display(mass_1, mass_2, distance, force);

//     return 0;
// }

// void force_calculate(double a, double b, double c, double d)
// {
//     d = (gravity_constant*a*b)/(c*c);
//     return;
// }
// void input(double *a, double *b, double *c)
// {
//     printf("What is the first mass in grams?\n");
//     scanf("%lf", a);
//     printf("What is the second mass in grams?\n");
//     scanf("%lf", b);
//     printf("What is the distance between the two masses in centimeters\n");
//     scanf("%lf", c);
// }
// void display(double a, double b, double c, double d)
// {
//     printf("%fg is the first mass\n", a);
//     printf("%fg is the second mass\n", b);
//     printf("%fcm is the distance between the two masses\n", c);
//     printf("%f is the force in dynes between both masses\n", d);
//     return;
// }

#include <stdio.h>
#include<math.h>

double force(int);
const double g=9.8;

int main()
{
    double m=200;
    double f=force(m);
    printf("The force on %lf mass with %lf gravity is %lf", m,g,f);
    return 0;
}

double force(int m){
    return m*g;
}