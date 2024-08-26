// WAP to convert celcius into farenheit.
//(0°C × 9/5) + 32 = 32°F
#include <stdio.h>

float c2f(float c);

int main()
{
    float c=37;
    float f=c2f(c);
    printf("The value of %f degree Celcius in Fahrenheit is %f\n", c,f);
    return 0;
}

float c2f(float c){
    float f = (c * 9/5.0) + 32;
    return f;
}