/*
 * coding-c | Unit 1 - Basics of C
 * 07_symbolic_constants.c
 * --------------------------------------------------------------
 * [SPPU FPL Unit-I topic: Defining Symbolic Constants]
 *
 * Problem without symbolic constants:
 *   PI written 30 times in a program - changing 3.14 to
 *   3.14159 means 30 edits. PASS_MARKS written as 40 - nobody
 *   remembers what "40" meant when reading the code.
 *
 * Solution: #define gives the constant a NAME in the
 * definition section, before main().
 *
 * Rules for symbolic constants:
 *   1. No space between # and define
 *   2. One space required between #define and the name
 *   3. Name is conventionally UPPERCASE (readability)
 *   4. NO semicolon at the end of a #define line
 *   5. A symbolic name cannot be re-assigned another value
 *
 * Expected Output:
 *   Area of circle with radius 5 = 78.54
 *   pass/fail decision using PASS_MARKS
 * --------------------------------------------------------------
 */

#include <stdio.h>

#define PI          3.14159   /* preprocessor directive     */
#define TOTAL_CLASS 50
#define PASS_MARKS  40

int main(void)
{
    float radius = 5.0f;
    float area   = PI * radius * radius;  /* PI replaced by its
                                             value BEFORE
                                             compilation      */
    int marksRaj     = 45;
    int marksPriya   = 33;

    printf("--- Symbolic constant PI = %g ---\n", PI);
    printf("Area of circle with radius %.1f = %.2f\n",
            radius, area);

    printf("\n--- Class strength = %d students ---\n",
            TOTAL_CLASS);

    printf("\n--- Using PASS_MARKS = %d ---\n", PASS_MARKS);
    printf("Raj   scored %d : %s\n",
            marksRaj,   marksRaj   >= PASS_MARKS ? "PASS" : "FAIL");
    printf("Priya scored %d : %s\n",
            marksPriya, marksPriya >= PASS_MARKS ? "PASS" : "FAIL");

    /* NOTE: PI = 3.15;  would be a compile ERROR - a symbolic
       constant cannot be given a new value.                   */

    return 0;
}
