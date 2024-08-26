/*
Calculate income tax paid by an employee to the government as per the slabs mention below:

Income Slab      Tax
2.5l-5.0l       5%
5.0l-10.0l      20%
above 10.0l     35%
above

*/

#include<stdio.h>
int main()
{
    int income;
    float tax=0;
    printf("Enter your income\n");
    scanf("%d", &income);

    if(income<250000){
        printf("Your income is les than 2.5 lakhs so no tax for you");

    }
    else if (income<500000 && income>250000)
    {
        printf("Your income is between 2.5lakh and 5lakh, so,");
        tax=tax+ 0.05*(income-250000);
    }

    else if (income<1000000 && income>500000)
    {
        printf("Your income is between 5lakh and 10lakh, so,");
        tax=tax+ 0.05*(500000-250000);
        tax=tax+ 0.2*(income-500000);
    }

    else
    {
        printf("Your income is above 10lakh, so,");
        tax=tax+ 0.05*(500000-250000);
        tax=tax+ 0.2*(1000000-500000);
        tax=tax+ 0.3*(income-1000000);
    }
    printf("Total tax to be paid is %f",tax);
    return 0;
}