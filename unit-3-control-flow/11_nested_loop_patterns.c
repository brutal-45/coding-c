/*
 * coding-c | Unit 3 - Control Flow
 * 11_nested_loop_patterns.c
 * --------------------------------------------------------------
 * [Unit-III: nested loops]
 *
 * A loop inside another loop: the INNER loop completes ALL its
 * repetitions for EVERY SINGLE step of the outer loop.
 *
 *      for (i = 1; i <= r; i++)        outer: rows
 *      {
 *          for (j = 1; j <= i; j++)    inner: columns
 *              printf("*");
 *          printf("\n");
 *      }
 *
 * Expected Output (rows = 4):
 *   *
 *   * *
 *   * * *
 *   * * * *
 *   and a number pyramid
 * --------------------------------------------------------------
 */

#include <stdio.h>

int main(void)
{
    int rows;

    printf("Enter number of rows (1-9): ");
    if (scanf("%d", &rows) != 1) {
        printf("Invalid input!\n");
        return 1;
    }
    if (rows < 1 || rows > 9) {
        printf("Rows clamped to 1..9 for neat output.\n");
        rows = (rows < 1) ? 1 : 9;
    }

    /* Pattern 1: right triangle of stars ---------------------- */
    printf("\nStar triangle:\n");
    for (int i = 1; i <= rows; i++) {        /* rows            */
        for (int j = 1; j <= i; j++) {       /* stars in row i  */
            printf("* ");
        }
        printf("\n");                        /* end of a row    */
    }

    /* Pattern 2: number pyramid ------------------------------- */
    printf("\nNumber pattern:\n");
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);                /* 1 2 3 ... i     */
        }
        printf("\n");
    }

    /* Total stars printed in pattern 1 = 1+2+...+rows          */
    printf("\nInner loop ran %d times in total (1+2+...+%d)\n",
            rows * (rows + 1) / 2, rows);

    return 0;
}
