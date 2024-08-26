/*
What will be the the output of the following code.

#include<stdio.h>
int main{
    int arr[2][2][3]={0,1,2,3,4,5,6,7,8,9,10,11,12};
    printf("%d", arr[1][0][2]);
    return 0;
}
*/
#include <stdio.h>
int main()
{
    int arr[2][2][3] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    printf("%d", arr[1][0][2]);
    return 0;
}
/*
The main() function declares a 3D integer array arr with the dimensions 2 x 2 x 3 
and initializes it with the values from 0 to 11.

The arr array is a 3D array with the dimensions 2 x 2 x 3. 
The first dimension has the indices 0 and 1, 
the second dimension has the indices 0 and 1, 
and the third dimension has the indices 0, 1, and 2.

arr[1][0][2] means 1(2*3)+0*(3)+ 3 = 9th element
*/