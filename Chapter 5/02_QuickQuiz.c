/*
WAP with three function:
1. Good morning function which prints "Good Morning",
2. Good afternoon function which prints "Good Afternoon",
3. Good night function which prints "Good night"

main() should call all of them in order 1->2->3

*/

#include <stdio.h>

void display1();
void display2();
void display3();

void goodmorning();
void goodafternoon();
void goodnight();

int main()
{
    display1();
    display2();
    display3();

    goodmorning();
    goodafternoon();
    goodnight();

    return 0;
}

void display1()
{
    printf("Good Morning\n");
}

void display2()
{
    printf("Good Aftermoon\n");
}

void display3()
{
    printf("Good Night\n");
}

void goodmorning()
{
    printf("A very good morning to you!\n");
}

void goodafternoon()
{
    printf("Have a good afternoon!\n");
}

void goodnight()
{
    printf("A blessed good night to you!\n");
}
