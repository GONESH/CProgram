/*
WAP using function which calculate the sum and average of two numbers.
Use pointers and print the values of Sum and Average in main()
*/

#include <stdio.h>

void avgAndSum(float, float, float *, float *);
void avgAndSum2(float, float, float *, float *);

int main()
{
    float a, b;
    float psum, pavg;
    printf("Enter the first numbers\n");
    scanf("%d", &a);
    printf("Enter the second numbers\n");
    scanf("%d", &a, &b);

    avgAndSum2(a, b, &psum, &pavg);
    // psum=&sum;
    // pavg=&avg;
    // *psum=a+b;
    // *pavg=*psum/2;
    printf("Sum=%f\n", psum);
    printf("Average=%f\n", pavg);

    // Direct method
    //  float a = 6;
    //  float b = 423;
    //  float sum, avg;
    //  avgAndSum(a, b, &sum, &avg);
    //  printf("Sum=%f\n", sum);
    //  printf("Average=%f\n", avg);

    return 0;
}

void avgAndSum(float a, float b, float *ptr1, float *ptr2)
{
    // *ptr1 = a + b;
    // // *ptr1=(a+b)/2;
    // *ptr2 = *ptr1 / 2;
}
void avgAndSum2(float a, float b, float *psum, float *pavg)
{
    // *ptr1 = a + b;
    // // *ptr1=(a+b)/2;
    // *ptr2 = *ptr1 / 2;
    *psum = a + b;
    // *pavg=*psum/2;
    *pavg = (a + b) / 2;
}