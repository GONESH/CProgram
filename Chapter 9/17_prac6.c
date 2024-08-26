/*
Create an array of 5 complex numbers created in problem 16_prac5.c
and display them with the help of display function.
The values must be taken as an input from user.
*/
#include <stdio.h>

typedef struct {
    //for interger
    int real;
    int imag;
    
} complex;

void display(complex c) {
    printf("(%d, %di)\n", c.real, c.imag);
}

int main() {
    complex arr[5];

    // Take user input for the complex numbers
    for (int i = 0; i < 5; i++) {
        printf("Enter the real part of the complex number %d: ", i + 1);
        scanf("%d", &arr[i].real);

        printf("Enter the imaginary part of the complex number %d: ", i + 1);
        scanf("%d", &arr[i].imag);
    }

    // Display the complex numbers using the display function
    printf("The complex numbers are:\n");
    for (int i = 0; i < 5; i++) {
        display(arr[i]);
    }

    return 0;
}
/*
we define a structure complex with two members: 
real and imag. We declare an array arr of 5 complex numbers.

We take user input for the real and imaginary parts of the complex numbers using a for loop. 
We use the scanf function to read the input values and store them in the array.

We define a display function to display the complex numbers. 
The display function takes a complex number as an argument and prints it in the format (real, imag).

Finally, we display the complex numbers using the display function in a for loop. 

Output:
Enter the real part of the complex number 1: 1
Enter the imaginary part of the complex number 1: 2
Enter the real part of the complex number 2: 3
Enter the imaginary part of the complex number 2: 4
Enter the real part of the complex number 3: 5
Enter the imaginary part of the complex number 3: 6
Enter the real part of the complex number 4: 7
Enter the imaginary part of the complex number 4: 8
Enter the real part of the complex number 5: 9
Enter the imaginary part of the complex number 5: 10
The complex numbers are:
(1, 2i)
(3, 4i)
(5, 6i)
(7, 8i)
(9, 10i)
*/
//For floating point
/*

#include <stdio.h>

typedef struct {
    float real;
    float imag;
} complex;

void display(complex c) {
    printf("(%f, %fi)\n", c.real, c.imag);
}

int main() {
    complex arr[5];

    // Take user input for the complex numbers
    for (int i = 0; i < 5; i++) {
        printf("Enter the real part of the complex number %d: ", i + 1);
        scanf("%f", &arr[i].real);

        printf("Enter the imaginary part of the complex number %d: ", i + 1);
        scanf("%f", &arr[i].imag);
    }

    // Display the complex numbers using the display function
    printf("The complex numbers are:\n");
    for (int i = 0; i < 5; i++) {
        display(arr[i]);
    }

    return 0;
}
*/
/*
Output:
Enter the real part of the complex number 1: 1.1
Enter the imaginary part of the complex number 1: 3.5
Enter the real part of the complex number 2: 6
Enter the imaginary part of the complex number 2: 7
Enter the real part of the complex number 3: 7.8
Enter the imaginary part of the complex number 3: 12.0
Enter the real part of the complex number 4: 13.5
Enter the imaginary part of the complex number 4: 15.6
Enter the real part of the complex number 5: 41.3
Enter the imaginary part of the complex number 5: 1.2
The complex numbers are:
(1.100000, 3.500000i)
(6.000000, 7.000000i)
(7.800000, 12.000000i)
(13.500000, 15.600000i)
(41.299999, 1.200000i)
*/