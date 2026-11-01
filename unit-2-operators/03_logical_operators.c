/*
 * coding-c | Unit 2 - Operators & Expressions
 * 03_logical_operators.c
 * --------------------------------------------------------------
 * Logical operators combine or invert conditions.
 * Result is again 1 (true) or 0 (false).
 *
 *   &&  logical AND  - true only if BOTH sides are true
 *   ||  logical OR   - true if AT LEAST one side is true
 *   !   logical NOT  - inverts the condition (unary)
 *
 * Short-circuit behaviour:
 *   in (x && y), if x is false, y is NEVER evaluated.
 *   in (x || y), if x is true,  y is NEVER evaluated.
 *
 * Expected Output:
 *   full truth table + one short-circuit demo
 * --------------------------------------------------------------
 */

#include <stdio.h>

int main(void)
{
    printf("Truth table (1 = true, 0 = false)\n");
    printf("-----------------------------------------\n");
    printf("  a   b  |  a && b |  a || b  |  !a\n");
    printf("-----------------------------------------\n");
    printf("  0   0  |    %d    |    %d     |   %d\n",
            0 && 0, 0 || 0, !0);
    printf("  0   1  |    %d    |    %d     |   %d\n",
            0 && 1, 0 || 1, !0);
    printf("  1   0  |    %d    |    %d     |   %d\n",
            1 && 0, 1 || 0, !1);
    printf("  1   1  |    %d    |    %d     |   %d\n",
            1 && 1, 1 || 1, !1);

    /* Real example: pass requires marks>=40 AND attendance>=75 */
    int marks = 65, attendance = 80;
    printf("\nmarks=%d, attendance=%d\n", marks, attendance);
    printf("PASS condition (marks>=40 && attendance>=75): %d\n",
            marks >= 40 && attendance >= 75);
    printf("OR  example    (marks>=90 || attendance>=75): %d\n",
            marks >= 90 || attendance >= 75);
    printf("NOT example    (!(marks < 40))              : %d\n",
            !(marks < 40));

    return 0;
}
