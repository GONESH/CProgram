/* WAP to convert celcius (Centigrade) degrees temperature
to farenheit*/

#include<stdio.h>
int main()
{
   // (0°C × 9/5) + 32 = 32°F
   //int C=4;
   int c;
   printf("Enter celcius:\n");
   scanf("%d", &c);
   //float f= (C * (9/5)) + 32;
   float F= (c * (9/5)) + 32;
   //printf("The value of temperature in fahrenheit is %f",f);
   printf("The value of temperature in fahrenheit is %f",F);

    return 0;
}