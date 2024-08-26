// function which calls itself is called recursion
#include <stdio.h>

// factorial(n)=n * n-1 * n-2 * n-3 * 4 * 3 * 2 * 1
// factorial(5)= 5 * 4 * 3 * 2 *1
// factorial(1)= 1
// factorial(0)= 1

// factorial(n)=n * n-1 * n-2 * n-3 * 4 * 3 * 2 * 1
// factorial(n)=n * (n-1 * n-2 * n-3 * 4 * 3 * 2 * 1)
// factorial(n)=n * factorial(n-1 * n-2 * n-3 * 4 * 3 * 2 * 1)
// factorial(n)=n * factorial(n-1)

int fact(int);

int main()
{
    printf("The value of factorial 5 is %d",fact(5));
    return 0;
}

int fact(int n){
    if(n==1 || n==0 ){ //base condition - because they donot call any function in recursive function
        return 1;
    }
    return n * fact(n-1);

}

// How does it work
/*
fact(4)
4 * fact(3)
4 * 3 * fact(2)
4 * 3 * 2 * fact(1)
4 * 3 * 2 * 1 //if(n==1 || n==0), return 1;
4 * 3 * 2 * 1 = 24
*/