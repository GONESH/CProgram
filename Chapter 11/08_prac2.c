/*
Use the array in 17_prac1.c to store 6 integers entered by user.
*/
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main()
{
    // int *ptr;
    // ptr=(int *) malloc(6 * sizeof(int));
    // ptr[0]=62;
    // ptr[1]=124;
    // ptr[2]=35;
    // ptr[3]=23;
    // ptr[4]=89;
    // ptr[5]=87;
    // printf("The value at %d is %d\n", 0,ptr[0]);
    // printf("The value at %d is %d\n", 1,ptr[1]);
    // printf("The value at %d is %d\n", 2,ptr[2]);
    // printf("The value at %d is %d\n", 3,ptr[3]);
    // printf("The value at %d is %d\n", 4,ptr[4]);
    // printf("The value at %d is %d\n", 5,ptr[5]);

    int *pt;
    int n;
    printf("Enter the sixe of an array:");
    scanf("%d", &n);
    pt = (int *)malloc(n * sizeof(int));
    if (pt == NULL) {
        printf("Error allocating memory.\n");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d element:", i);
        scanf("%d", &pt[i]);
    }

    // Print the values of the allocated memory
    for (int i = 0; i < n; i++) {
        printf("The value at %d is %d\n", i, pt[i]);
    }
    // Free the allocated memory using free()
    free(pt);

    printf("Memory freed.\n");

    return 0;
}