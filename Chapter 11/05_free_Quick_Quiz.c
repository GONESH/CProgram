/*
WAP a program to demonstrate the usage of free() with malloc().

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    // Allocate memory for 5 integers using malloc()
    ptr = (int *)malloc(5 * sizeof(int));

    if (ptr == NULL) {
        printf("Error allocating memory.\n");
        return 1;
    }

    // Use the allocated memory
    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1;
    }

    // Print the values of the allocated memory
    for (int i = 0; i < 5; i++) {
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    // Free the allocated memory using free()
    free(ptr);

    // Try to access the freed memory
    //ptr[0] = 10;

    printf("Memory freed.\n");

    return 0;
}

/*
we declare an integer pointer ptr and allocate memory for 5 integers using the malloc() function. 
We check if the memory allocation is successful using an if statement. 
If the memory allocation is not successful, we print an error message and return an error code.

We then use the allocated memory by assigning values to the elements of the ptr array. 
We print the values of the allocated memory using a for loop.

After using the allocated memory, we free the memory using the free() function. 
We then try to access the freed memory by assigning a value to ptr[0], 
but this will cause a segmentation fault because the memory has been freed.

Finally, we print a message using the printf() function to indicate that the memory has been freed.

Note that it is important to check if the memory allocation is successful before using the allocated memory. 
If the memory allocation is not successful, 
the program should print an error message and return an error code. 
It is also important to free the allocated memory using the free() function after using the memory to avoid memory leaks.
*/