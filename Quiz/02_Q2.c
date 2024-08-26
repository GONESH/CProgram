/*
What will be the output of the following code.
*/

#include<stdio.h>
int main ()
{
    int a,b,c;
    a=15;
    b=10;
    c=5;
    if(a>b>c){
        printf("True");
    }else{
        printf("False");
    }
    return 0;
}
/*
The main() function declares three integer variables a, b, and c 
and initializes them with the values 15, 10, and 5, respectively.
The if statement checks if the condition a > b > c is true or false.
The condition a > b > c is false because a is greater than b, 
but b is not greater than c.
Therefore, the else block is executed 
and the printf() function prints the string "False".
*/