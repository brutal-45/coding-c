/*
 * coding-c | Unit 1 - Basics of C
 * 10_formatted_io.c
 * --------------------------------------------------------------
 * [SPPU FPL Unit-I topic: Declaration of Variables,
 *  Assigning Values, format specifiers]
 *
 * This is the CORRECT version of the classic "student record"
 * program (the college-work/ starter had small bugs in it).
 *
 * Format specifiers used:
 *   %d  int     %f  float   %c  char    %lf  double
 *   %s  string  %u  unsigned %ld long
 *
 * TRICK: scanf(" %c", &ch)  <- the space before %c makes
 * scanf SKIP the leftover Enter key so the char is read.
 *
 * Expected Output:
 *   Enter roll no: 12
 *   Enter percentage: 85.5
 *   Enter grade: A
 *   ...
 *   Roll no is 12, percentage is 85.50, grade is A
 * --------------------------------------------------------------
 */

#include <stdio.h>

int main(void)
{
    int    rollno;
    float  percen;
    char   grade;
    double count;

    printf("Enter your roll no: ");
    if (scanf("%d", &rollno) != 1) return 1;

    printf("Enter your percentage: ");
    if (scanf("%f", &percen) != 1) return 1;

    printf("Enter your grade: ");
    if (scanf(" %c", &grade) != 1) return 1;   /* note " %c"    */

    printf("Enter a big counter value: ");
    if (scanf("%lf", &count) != 1) return 1;

    printf("\nThe data entered by user is as follows:\n");
    printf("=========================================\n");
    printf("Roll no     : %d\n",   rollno);   /* variable AFTER
                                                 the format string */
    printf("Percentage  : %.2f\n", percen);
    printf("Grade       : %c\n",   grade);
    printf("Counter     : %.2lf\n", count);

    return 0;
}
