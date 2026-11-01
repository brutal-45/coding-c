/*
 * coding-c | Unit 3 - Control Flow
 * 08_while_loop.c
 * --------------------------------------------------------------
 * [Unit-III: Decision Making and Looping - while loop]
 *
 * The while loop is an ENTRY-CONTROLLED loop: the condition is
 * checked BEFORE each iteration, so the body may run ZERO times.
 *
 * Syntax:
 *     while (condition) {
 *         ...body...
 *     }
 *
 * Every loop needs 3 things:
 *   1. initialisation   (i = 1)
 *   2. condition        (i <= n)
 *   3. update           (i++)  <- forgetting this = INFINITE LOOP
 *
 * Expected Output:
 *   sum 1..10 = 55, multiplication table of 5
 * --------------------------------------------------------------
 */

#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    /* Demo 1: sum of first n natural numbers ----------------- */
    int i = 1;              /* 1. initialisation                */
    int sum = 0;
    while (i <= n) {        /* 2. condition                     */
        sum = sum + i;
        i++;                /* 3. update                        */
    }
    printf("Sum of first %d natural numbers = %d\n", n, sum);

    /* Demo 2: multiplication table ---------------------------- */
    printf("\nMultiplication table of %d:\n", n);
    i = 1;
    while (i <= 10) {
        printf("%2d x %2d = %3d\n", n, i, n * i);
        i++;
    }

    return 0;
}
