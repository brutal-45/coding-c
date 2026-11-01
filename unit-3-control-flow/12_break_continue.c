/*
 * coding-c | Unit 3 - Control Flow
 * 12_break_continue.c
 * --------------------------------------------------------------
 * [Unit-III: break and continue statements]
 *
 * break    - terminates the WHOLE loop (or switch) immediately;
 *            execution continues after the loop.
 * continue - skips the REST of the CURRENT iteration only and
 *            jumps to the next iteration (loop still runs).
 *
 * Mnemonic:
 *   break = break OUT of the loop
 *   continue = continue with the NEXT round
 *
 * Expected Output:
 *   break demo  : 1 2 3 4 5 6 (stops at 7)
 *   continue demo: odd numbers 1 3 5 7 9
 * --------------------------------------------------------------
 */

#include <stdio.h>

int main(void)
{
    /* break: stop the loop completely at 7 ------------------- */
    printf("break demo : ");
    for (int i = 1; i <= 10; i++) {
        if (i == 7) {
            break;              /* loop ends right here         */
        }
        printf("%d ", i);
    }
    printf("  <- loop ended at 7\n");

    /* continue: skip multiples of 3 --------------------------- */
    printf("continue   : ");
    for (int i = 1; i <= 10; i++) {
        if (i % 3 == 0) {
            continue;           /* skip printing this i only    */
        }
        printf("%d ", i);
    }
    printf(" <- multiples of 3 skipped\n");

    /* break in while - searching for the first number whose
       square exceeds 50 --------------------------------------- */
    int n = 1;
    while (1) {                 /* "infinite" loop on purpose    */
        if (n * n > 50) {
            printf("First square above 50 is %d (=%d squared)\n",
                    n * n, n);
            break;              /* the ONLY exit door            */
        }
        n++;
    }

    return 0;
}
