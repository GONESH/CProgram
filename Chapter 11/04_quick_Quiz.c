/*
WAP to create an array of size n using calloc()
where n is an integer entered by the user
*/

#include <stdio.h>
#include <malloc.h>

int main()
{
    int *ptr;
    int n;
    printf("Enter the size of your array: ", n);
    scanf("%d",&n);

    ptr = (int *)calloc(n, sizeof(int));
    
    // ptr[0] = 35;
    // ptr[1] = 36;
    // ptr[2] = 37;
    // ptr[4] = 38;

    printf("%d", ptr[2]);
    return 0;
}