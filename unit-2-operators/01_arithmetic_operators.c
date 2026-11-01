/*
 * coding-c | Unit 2 - Operators & Expressions
 * 01_arithmetic_operators.c
 * --------------------------------------------------------------
 * Arithmetic operators:  +  -  *  /  %
 * They are BINARY operators (need two operands).
 *
 * Important exam points:
 *   - 5 / 2 = 2     (integer division: fraction is TRUNCATED)
 *   - 5.0 / 2 = 2.5 (real division: at least one operand must
 *                    be float/double)
 *   - % (modulus) gives the REMAINDER and works only on
 *     integers: 14 % 4 = 2
 *
 * Expected Output:
 *   a/b table for 14 and 4, plus a real-division demo
 * --------------------------------------------------------------
 */

#include <stdio.h>

int main(void)
{
    int a = 14, b = 4;          /* the example from the notes   */
    float fa = 14.0f, fb = 4.0f;

    printf("Using a = %d and b = %d\n\n", a, b);

    printf("a + b = %d   (addition)\n",    a + b);
    printf("a - b = %d   (subtraction)\n", a - b);
    printf("a * b = %d   (multiplication)\n", a * b);
    printf("a / b = %d   (integer division!)\n", a / b);
    printf("a %% b = %d   (modulus: remainder)\n", a % b);

    printf("\nSame numbers as floats:\n");
    printf("fa / fb = %.2f   (real division)\n", fa / fb);

    /* Trick: cast one operand to float instead of using
       separate float variables:
       (float)a / b  ==  3.50                                  */
    printf("(float)a / b = %.2f\n", (float)a / b);

    /* a % b would be a compile ERROR: % needs integer operands
       printf("%d", 14.0 % 4);   <- invalid                    */

    return 0;
}
