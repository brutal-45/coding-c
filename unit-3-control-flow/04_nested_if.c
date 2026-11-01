/*
 * coding-c | Unit 3 - Control Flow
 * 04_nested_if.c
 * --------------------------------------------------------------
 * [Unit-III: Decision Making and Branching - nested if]
 *
 * A nested if is an if (or if-else) placed INSIDE another if.
 * The inner condition is tested only when the outer one is
 * already true.
 *
 * Syntax:
 *     if (outer condition)
 *     {
 *         if (inner condition) { ... }
 *         else { ... }
 *     }
 *
 * Expected Output:
 *   Enter age and marks: 19 80
 *   Eligible for the scholarship!
 * --------------------------------------------------------------
 */

#include <stdio.h>

int main(void)
{
    int age, marks;

    printf("Enter age and marks: ");
    if (scanf("%d %d", &age, &marks) != 2) {
        printf("Invalid input!\n");
        return 1;
    }

    /* Outer: only students of age >= 18 may apply             */
    if (age >= 18) {
        printf("Age %d: eligible to apply.\n", age);

        /* Inner: scholarship needs marks >= 75                 */
        if (marks >= 75) {
            printf("Eligible for the scholarship!\n");
        }
        else {
            printf("But marks %d < 75: no scholarship.\n", marks);
        }
    }
    else {
        printf("Age %d < 18: cannot apply at all.\n", age);
    }

    /* Tip: deep nesting (>3 levels) is hard to read - the
       logical AND (age >= 18 && marks >= 75) can often
       replace a 2-level nest.                                 */

    return 0;
}
