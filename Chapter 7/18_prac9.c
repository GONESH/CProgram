
// /*
// Create a three-dimension array and print the 
//address of its elements in increasing order.
// */
// #include<stdio.h>
// int main ()
// {
//     // int a[3][3][3];
//     // int *p;
//     // int i,j,k;
//     // for(i=0;i<3;i++)
//     // {
//     //     for(j=0;j<3;j++)
//     //     {
//     //         for(k=0;k<3;k++)
//     //         {
//     //             a[i][j][k]=i+j+k;
//     //         }
//     //         printf("\n");
//     //     }
        
//     // }
    
//     return 0;
// }

#include <stdio.h>

int main() {
    // Declare a 3D array with dimensions 2x3x4
    int arr[2][3][4];

    // Print the addresses of the elements in increasing order
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                printf("Address of arr[%d][%d][%d]: %p\n", i, j, k, &arr[i][j][k]);
            }
        }
    }

    return 0;
}
/*
%p is a format specifier that stands for "pointer" and is used to print the value of a pointer 
(i.e., a memory address) in hexadecimal format.
*/