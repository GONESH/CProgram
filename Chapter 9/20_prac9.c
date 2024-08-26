/*
Write a structure capable of storing date.
Write a function to compare those dates.

*/
#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

int compare_dates(struct date d1, struct date d2) {
    if (d1.year > d2.year) {
        return 1;
    } else if (d1.year < d2.year) {
        return -1;
    } else {
        if (d1.month > d2.month) {
            return 1;
        } else if (d1.month < d2.month) {
            return -1;
        } else {
            if (d1.day > d2.day) {
                return 1;
            } else if (d1.day < d2.day) {
                return -1;
            } else {
                return 0;
            }
        }
    }
}

int main() {
    struct date d1 = {25, 12, 2020};
    struct date d2 = {26, 12, 2020};

    int result = compare_dates(d1, d2);

    if (result == 1) {
        printf("Date 1 is greater than Date 2\n");
    } else if (result == -1) {
        printf("Date 1 is less than Date 2\n");
    } else {
        printf("Date 1 is equal to Date 2\n");
    }

    return 0;
}
/*
we define a structure date with three fields: day, month, and year. 
We also define a function compare_dates to compare two dates.

The compare_dates function takes two dates d1 and d2 as arguments and returns an integer value indicating the comparison result:

1 if d1 is greater than d2
-1 if d1 is less than d2
0 if d1 is equal to d2
The function compares the years first, then the months, and finally the days. 
If the years are equal, it compares the months. 
If the months are also equal, it compares the days.

In the main function, we declare two dates d1 and d2 and initialize them with some values. 
We then call the compare_dates function with d1 and d2 as arguments and print the comparison result using an if-else statement.

Note that the compare_dates function uses a nested if-else statement to compare the dates. 
This is because we need to compare the years, months, and days in order. 
If we used a simple if statement, we would only compare the years and ignore the months and days.
*/