
#include <stdio.h>
int main()
{
    int marks[3] = {1, 2, 4};
    // &marks[0] => marks -----> [important]
    // int *ptr=&marks[0];

    int *ptr= marks;
    // *marks=89;
    *ptr=89;

    //in Integer (int type)
    //*ptr=89 will reserve 4 byte for marks[0] in adress memory

    ptr++;
    *ptr=65;
    // ptr++ will point into next four byte of memory and stor *ptr=65 for mark[1]

    ptr++;
    *ptr=56;


    printf("The marks scored by student 0 is %d \n", marks[0]);
    printf("The marks scored by student 1 is %d \n", marks[1]);
    printf("The marks scored by student 2 is %d \n", marks[2]);
    return 0;
}

/*
In terms of Integer it takes four byte 
example-
int i=3; 
int *a =&i; a==> 87992(say)
a++; Now a==> 87994
*/
/*
In terms of character it takes one byte 
example-
char a='A'; 
char *b =&a; b==> 87994(say)
b++; Now b==> 87995
*/
/*
In terms of Floating ponit it takes four byte 
example-
float i=1.7; 
float *a =&i; add of i or a==> 87994(say)
a++; Now a==> 87998
*/