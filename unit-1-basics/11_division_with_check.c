/*
 * coding-c | Unit 1 - Basics of C
 * 11_division_with_check.c
 * --------------------------------------------------------------
 * [SPPU FPL Unit-I, Q5 - 3 Marks]
 * "Draw a flowchart for division of two numbers."
 *
 * The flowchart (draw it in the exam with ANSI symbols):
 *
 *        ( OVAL )  Start
 *             |
 *      / ====== \      Input a, b        (parallelogram)
 *      \ ====== /
 *             |
 *        / ------ \
 *       <  b == 0 ? >------ Yes ----> Print "Division not
 *        \ ------ /                   possible"  (oval: Stop)
 *             | No
 *             |
 *      / ====== \      q = a / b        (rectangle)
 *      \ ====== /
 *             |
 *      / ====== \      Print q          (parallelogram)
 *      \ ====== /
 *             |
 *        ( OVAL )  Stop
 *
 * Symbols: Oval = Start/Stop, Parallelogram = Input/Output,
 * Rectangle = Process, Diamond = Decision, Arrows = flow.
 *
 * Expected Output:
 *   Enter dividend and divisor: 10 2
 *   10.00 / 2.00 = 5.00
 * --------------------------------------------------------------
 */

#include <stdio.h>

int main(void)
{
    float a, b, q;

    printf("Enter dividend and divisor: ");
    if (scanf("%f %f", &a, &b) != 2) {
        printf("Invalid input!\n");
        return 1;
    }

    /* Decision box: b == 0 ? */
    if (b == 0) {
        printf("Division not possible (divisor is zero)\n");
        return 1;                       /* Stop with error      */
    }

    q = a / b;                          /* Process box          */
    printf("%.2f / %.2f = %.2f\n", a, b, q);   /* Output box    */

    return 0;                           /* Stop                 */
}
