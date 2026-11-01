/*
 * coding-c | Unit 3 - Control Flow
 * 01_simple_if.c
 * --------------------------------------------------------------
 * [Unit-III: Decision Making and Branching - simple if]
 *
 * Syntax:
 *     if (condition)
 *     {
 *         ...statements...   <- run ONLY when condition is true
 *     }
 *     ...next statement...   <- always runs
 *
 * The condition is any expression that gives non-zero (true).
 *
 * Expected Output:
 *   with marks = 65: both messages
 *   with marks = 20: only the second message
 * --------------------------------------------------------------
 */

#include <stdio.h>

#define PASS_MARKS 40

int main(void)
{
    int marks;

    printf("Enter your marks: ");
    if (scanf("%d", &marks) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    /* simple if: the block below is SKIPPED when marks < 40   */
    if (marks >= PASS_MARKS) {
        printf("Congratulations! You passed with %d marks.\n",
                marks);
    }

    /* This line is OUTSIDE the if -> always executed          */
    printf("Result processed.\n");

    /* Blocks vs single statements: if there is exactly ONE
       statement, braces are optional:
           if (marks >= 40)
               printf("Pass\n");
       but ALWAYS using braces avoids bugs.                    */

    return 0;
}
