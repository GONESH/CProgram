/*
WAP a program to print n natural numbers in reverse order
*/
#include <stdio.h>
int main()
{
    // int i, start;

    // /* Input start range from user */
    // printf("Enter starting value: ");
    // scanf("%d", &start);

    // /*
    //  * Run loop from 'start' to 1 and
    //  * decrement 1 in each iteration
    //  */
    // for (i = start; i >= 1; i--)
    // {
    //     printf("%d\n", i);
    // }

    // Start and stop
    int i, start, end;

    // /* Input start and end limit from user */
    printf("Enter starting value: ");
    scanf("%d", &start);
    
    printf("Enter end value: ");
    scanf("%d", &end);

    // /*
    //  * Run loop from 'start' to 'end' and 
    //  * decrement by 1 in each iteration
    //  */ 
    for(i=start; i>=end; i--)
    {
        printf("%d\n", i);
    }

    // Using While loop

    // int n;

    // // /*
    // //  * Input a number from user
    // //  */
    // printf("Enter value of n: ");
    // scanf("%d", &n);

    // while(n>=1)
    // {
    //     printf("%d\n", n);
    //     n--;
    // }

    //Do-while loop
    // int i=10;
    // printf("First 10 natural number in reverse order are\n");
    // do{
    //     printf("%d\n", i);
    //     i--;

    // }while(i>=1);

    // //User Input--Do-while
    // int counter, N;    
    // printf("Enter a Positive Number\n");  
    // scanf("%d", &N);  
   
    // printf("Printing Numbers form %d to 1\n", N);  
 
    // counter = N;
    // do {  
    //     printf("%d \n", counter);  
    //     counter--;
    // } while(counter > 0);

    return 0;
}