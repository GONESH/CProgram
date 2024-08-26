#include<stdio.h>
int main()
{
    //S.I. = (P × R × T)/100
    int p=500;
    int r=3;
    int t=2;
    float si= ((p*r*t)/100);
    //printf("The simple interest is:%f\n", ((p*r*t)/100));
    printf("The simple interest is:%f\n", si);


    int P,R,T;
    printf("Enter principle:\n");
    scanf("%d",&P);

    printf("Enter rate:\n");
    scanf("%d",&R);

    printf("Enter time:\n");
    scanf("%d",&T);

    float SI=((P*R*T)/100);
    printf ("The Simple Interest is %f:\n",SI);

    return 0;
}