/*Create an array dynamically capable of storing 5 integers.
Now use realloc so that it can now store 10 integer
*/

#include<stdio.h>
#include<stdlib.h>
int main ()
{
    /*
    int *ptr;
    ptr=(int *) malloc(5 * sizeof(int));
    ptr[0]=62;
    ptr[1]=124;
    ptr[2]=35;
    ptr[3]=23;
    ptr[4]=89;

    ptr=(int *) realloc(ptr,10 * sizeof(int));
    ptr[5]=12;
    ptr[6]=34;


    printf("The value at %d is %d\n", 0,ptr[0]);
    printf("The value at %d is %d\n", 1,ptr[1]);
    printf("The value at %d is %d\n", 2,ptr[2]);
    printf("The value at %d is %d\n", 3,ptr[3]);
    printf("The value at %d is %d\n", 4,ptr[4]);

    printf("The value at %d is %d\n", 5,ptr[5]);
    printf("The value at %d is %d\n", 6,ptr[6]);
    */
   //User define:
   int *ptr;
    int n;

    printf("Enter the size of an array:");
    scanf("%d", &n);

    // Allocate memory for n integers using malloc()
    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Error allocating memory.\n");
        return 1;
    }

    // Use the allocated memory
    for (int i = 0; i < n; i++) {
        printf("Enter the value of %d element:", i);
        scanf("%d", &ptr[i]);
    }

    // Increase the size of the allocated memory by 5 using realloc()
    ptr = (int *)realloc(ptr, (n + 5) * sizeof(int));

    if (ptr == NULL) {
        printf("Error reallocating memory.\n");
        return 1;
    }

    // Use the increased memory
    for (int i = n; i < n + 5; i++) {
        printf("Enter the value of %d element:", i);
        scanf("%d", &ptr[i]);
    }

    // Print the values of the increased memory
    for (int i = 0; i < n + 5; i++) {
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    // Free the allocated memory using free()
    free(ptr);

    printf("Memory freed.\n");
    return 0;
}