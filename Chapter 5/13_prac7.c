// WAP using function to print the following pattern(first n line)
/*
 *
 ***
 *****
 */
#include <stdio.h>

void star(int);
void revStar(int);
void revStarOdd(int);

int main()
{
    // star(4);
    // revStar(4);
    revStarOdd(4);

    return 0;
}

// void star(int n){
//     for (int i = 0; i < n; i++)
//     {
//        // print 2i+1 stars - for odd star
//        for (int j = 0; j < (2*i +1); j++)
//        {
//         printf("*");
//        }

//         printf("\n");
//     }

// }
/*
****
***
**
*
*/
void revStar(int n)
{
    for (int i = n; i >= 1; --i)
    {
        // print 2i+1 stars - for odd star
        for (int j = 1; j <= i; ++j)
        {
            printf("*");
        }

        printf("\n");
    }
}

void revStarOdd(int n)
{
    for (int i = n; i >= 0; --i)
    {
        // print 2i+1 stars - for odd star
        for (int j = 0; j <= (2*i + 1); ++j)
        {
            printf("*");
        }

        printf("\n");
    }
}