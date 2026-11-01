/*
 * coding-c | Unit 3 - Control Flow
 * 10_for_loop.c
 * --------------------------------------------------------------
 * [Unit-III: Decision Making and Looping - for loop]
 *
 * The for loop packs all 3 loop parts on ONE line:
 *
 *     for (initialisation; condition; update) {
 *         ...body...
 *     }
 *
 *     for (i = 1; i <= n; i++)
 *
 * Best used when the NUMBER OF REPETITIONS is known in
 * advance. Multiple variables are allowed:
 *     for (i = 0, j = 10; i < j; i++, j--)
 *
 * Expected Output:
 *   even numbers 2..20, factorial of the entered number
 * --------------------------------------------------------------
 */

#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter a number (<= 20): ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    /* Demo 1: print even numbers up to 2n -------------------- */
    printf("Even numbers up to %d: ", 2 * n);
    for (int i = 2; i <= 2 * n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    /* Demo 2: factorial  n! = 1 * 2 * 3 * ... * n ------------ */
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;    /* running product                  */
    }
    printf("Factorial of %d = %llu\n", n, fact);

    /* Demo 3: countdown - the update can also go DOWNWARD      */
    printf("Countdown: ");
    for (int i = n; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("... go!\n");

    return 0;
}
