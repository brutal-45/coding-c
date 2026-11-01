/*
 * coding-c | Unit 3 - Control Flow
 * 07_goto_demo.c
 * --------------------------------------------------------------
 * [Unit-III: goto statement]
 *
 * goto jumps UNCONDITIONALLY to a named label in the same
 * function:
 *
 *     goto end;      ...      end:  printf("done");
 *
 * It exists for error-handling in big system code, but in
 * normal programs goto makes logic messy - prefer if-else and
 * loops. Use it only to LEARN how control jumps.
 *
 * Expected Output:
 *   Enter a positive number: 10
 *   You entered 10
 *   Program finished.
 * --------------------------------------------------------------
 */

#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter a positive number: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    if (n <= 0) {
        printf("Negative or zero is not allowed!\n");
        goto end;               /* jump straight to the label   */
    }

    printf("You entered %d\n", n);
    printf("Square of %d is %d\n", n, n * n);

end:                            /* the label (colon at the end) */
    printf("Program finished.\n");

    return 0;
}
