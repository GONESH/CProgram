/*
Output "Old enough to vote!"
if myAge is greater than or equal to 18.
 Otherwise output "Not old enough to vote.":
*/

#include <stdio.h>
int main()
{
    int myAge = 25;
    int votingAge = 18;

    if (myAge >= votingAge)
    {
        printf("Old enough to vote!");
    }
    else
    {
        printf("Not old enough to vote.");
    }
    return 0;
}