/*
 * coding-c | Unit 3 - Control Flow
 * 14_calendar_generator.c
 * --------------------------------------------------------------
 * [Unit-III program from the class notes:
 *  "Program: simple calculator and generating a calendar"]
 *
 * Prints the calendar of ONE month.
 *
 * Input:
 *   startDay - weekday of the 1st (1 = Mon ... 7 = Sun)
 *   days     - number of days in the month (28..31)
 *
 * Logic (nested loops + conditions):
 *   1. print the weekday header
 *   2. print (startDay - 1) tab stops as blanks
 *   3. loop d = 1..days printing each date, 7 per row
 *
 * Expected Output:
 *   Enter weekday of 1st (1=Mon..7=Sun) and days in month: 6 30
 *                    MAY
 *   Mon Tue Wed Thu Fri Sat Sun
 *                       1   2
 *   ...
 * --------------------------------------------------------------
 */

#include <stdio.h>

int main(void)
{
    int startDay, days;

    printf("Enter weekday of 1st (1=Mon..7=Sun) and days in month: ");
    if (scanf("%d %d", &startDay, &days) != 2) {
        printf("Invalid input!\n");
        return 1;
    }
    if (startDay < 1 || startDay > 7 || days < 28 || days > 31) {
        printf("Use startDay 1-7 and days 28-31!\n");
        return 1;
    }

    printf("\nMon Tue Wed Thu Fri Sat Sun\n");

    /* blanks before day 1 */
    for (int i = 1; i < startDay; i++) {
        printf("    ");                 /* 4 spaces per day cell  */
    }

    /* the dates: 7 per row */
    int column = startDay;              /* current weekday slot   */
    for (int d = 1; d <= days; d++) {
        printf("%3d ", d);
        if (column == 7) {              /* finished the week?     */
            printf("\n");
            column = 1;
        }
        else {
            column++;
        }
    }
    printf("\n");

    return 0;
}
