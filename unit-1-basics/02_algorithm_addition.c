/*
 * coding-c | Unit 1 - Basics of C
 * 02_algorithm_addition.c
 * --------------------------------------------------------------
 * [SPPU FPL Unit-I, Q1 - 3 Marks]
 * "Define an algorithm and write an algorithm for addition of
 *  two numbers."
 *
 * Definition:
 *   An algorithm is a step-by-step, finite sequence of clear
 *   instructions designed to solve a specific problem.
 *
 * Algorithm: Addition of two numbers
 *   Step 1: Start
 *   Step 2: Input two numbers a and b
 *   Step 3: Add the two numbers and store the result in
 *           sum  (sum = a + b)
 *   Step 4: Print the value of sum
 *   Step 5: Stop
 *
 * Expected Output:
 *   Enter two numbers: 12 30
 *   Sum of 12 and 30 = 42
 * --------------------------------------------------------------
 */

#include <stdio.h>

int main(void)
{
    int a, b, sum;               /* Step 2 preparation: variables */

    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) != 2) {   /* Step 2: Input a, b   */
        printf("Invalid input!\n");
        return 1;
    }

    sum = a + b;                 /* Step 3: sum = a + b           */

    printf("Sum of %d and %d = %d\n", a, b, sum);  /* Step 4     */

    return 0;                    /* Step 5: Stop                  */
}
