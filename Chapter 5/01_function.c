#include <stdio.h>

void display(); //Function Prototype
// void average(int,float,int); //Function Prototype

void average( float a, float b){
    float c=(a+b)/2;
    printf("The average is %f\n", c);
}

int main()
{
    int a;
    display(); //Function Call
    average(4,6);
    return 0;
}

void display(){ //Function defination
    printf("Hello world1!\n");
    printf("Hello world2!\n");
    printf("Hello world3!\n");
    printf("Hello world4!\n");
    printf("Hello world5!\n");
}