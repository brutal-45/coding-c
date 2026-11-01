/*
 * coding-c | Unit 2 - Operators & Expressions
 * 06_ternary_operator.c
 * --------------------------------------------------------------
 * Conditional (ternary) operator - the only TERNARY operator
 * in C (it takes THREE operands):
 *
 *     condition ? value_if_true : value_if_false
 *
 * It is a compact replacement for a small if-else and can be
 * used INSIDE expressions and printf arguments.
 *
 * Expected Output:
 *   largest of two numbers, even/odd check, largest of three
 * --------------------------------------------------------------
 */

#include <stdio.h>

int main(void)
{
    int a = 25, b = 40;

    /* 1. Largest of two numbers                               */
    int max = (a > b) ? a : b;
    printf("a = %d, b = %d\n", a, b);
    printf("Largest of a and b = %d\n", max);

    /* 2. Even / odd check using modulus + ternary              */
    int n = 7;
    printf("\n%d is %s\n", n, (n % 2 == 0) ? "EVEN" : "ODD");

    /* 3. Pass / fail                                           */
    int marks = 38;
    printf("marks = %d -> %s\n", marks,
            (marks >= 40) ? "PASS" : "FAIL");

    /* 4. Largest of THREE numbers (nested ternary)             */
    int x = 12, y = 45, z = 30;
    int biggest = (x > y) ? ((x > z) ? x : z)
                          : ((y > z) ? y : z);
    printf("\nx=%d, y=%d, z=%d -> largest = %d\n",
            x, y, z, biggest);

    /* 5. Ternary inside printf - choosing the word             */
    printf("\nYou have %d task%s left.\n", 1,
            (1 == 1) ? "" : "s");

    return 0;
}
