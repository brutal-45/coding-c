/*
 * coding-c | Unit 3 - Control Flow
 * 03_else_if_ladder.c
 * --------------------------------------------------------------
 * [Unit-III: Decision Making and Branching - if-else-if ladder]
 *
 * Syntax:
 *     if      (cond1)  { ... }
 *     else if (cond2)  { ... }
 *     else if (cond3)  { ... }
 *     else             { ... }
 *
 * Conditions are tested TOP TO BOTTOM; the FIRST true one wins
 * and the whole ladder is exited. That is why the order of
 * conditions matters!
 *
 * Expected Output:
 *   Enter percentage: 82
 *   Grade: Distinction
 * --------------------------------------------------------------
 */

#include <stdio.h>

int main(void)
{
    float percentage;

    printf("Enter your percentage: ");
    if (scanf("%f", &percentage) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    if (percentage >= 75.0f) {
        printf("Grade: Distinction (>= 75)\n");
    }
    else if (percentage >= 60.0f) {
        printf("Grade: First Class (60 - 74.99)\n");
    }
    else if (percentage >= 50.0f) {
        printf("Grade: Second Class (50 - 59.99)\n");
    }
    else if (percentage >= 40.0f) {
        printf("Grade: Pass (40 - 49.99)\n");
    }
    else {
        printf("Grade: Fail (< 40)\n");
    }

    /* Note: writing (percentage >= 40) FIRST would put a
       95% student into "Pass" - always check from the highest
       boundary downwards.                                     */

    return 0;
}
