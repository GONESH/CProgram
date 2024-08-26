/*
Write a structure capable of storing date.
Write a function to compare those dates.
*/
/*
Solve 20_prac9.c for time using typedef keyword
*/
#include <stdio.h>

typedef struct {
    int seconds;
    int minute;
    int hour;
} time;

int compare_time(time t1, time t2) {
    if (t1.hour > t2.hour) {
        return 1;
    } else if (t1.hour < t2.hour) {
        return -1;
    } else {
        if (t1.minute > t2.minute) {
            return 1;
        } else if (t1.minute < t2.minute) {
            return -1;
        } else {
            if (t1.seconds > t2.seconds) {
                return 1;
            } else if (t1.seconds < t2.seconds) {
                return -1;
            } else {
                return 0;
            }
        }
    }
}

int main() {
    time t1 = {47, 30, 12};
    time t2 = {46, 30, 12};

    int result = compare_time(t1, t2);

    if (result == 1) {
        printf("Time 1 is greater than Time 2\n");
    } else if (result == -1) {
        printf("Time 1 is less than Time 2\n");
    } else {
        printf("Time 1 is equal to Time 2\n");
    }

    return 0;
}
/*
we define a structure date with three fields: seconds, minute, and hour. 
We also define a function compare_dates to compare two dates.

The compare_dates function takes two dates t1 and t2 as arguments and returns an integer value indicating the comparison result:

1 if t1 is greater than t2
-1 if t1 is less than t2
0 if t1 is equal to t2
The function compares the years first, then the months, and finally the days. 
If the years are equal, it compares the months. 
If the months are also equal, it compares the days.

In the main function, we declare two dates t1 and t2 and initialize them with some values. 
We then call the compare_dates function with t1 and t2 as arguments and print the comparison result using an if-else statement.

Note that the compare_dates function uses a nested if-else statement to compare the dates. 
This is because we need to compare the years, months, and days in order. 
If we used a simple if statement, we would only compare the years and ignore the months and days.
*/