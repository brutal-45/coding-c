/*
 * coding-c | Unit 2 - Operators & Expressions
 * 02_relational_operators.c
 * --------------------------------------------------------------
 * Relational operators COMPARE two values and give an int
 * result:  1 = true,  0 = false.
 *
 *   ==   equal to            (NOT the same as = assignment!)
 *   !=   not equal to
 *   >    greater than
 *   <    less than
 *   >=   greater than or equal
 *   <=   less than or equal
 *
 * Classic bug: writing if (a = b) instead of if (a == b).
 * '=' assigns; '==' compares.
 *
 * Expected Output:
 *   comparison table for a = 10, b = 20
 * --------------------------------------------------------------
 */

#include <stdio.h>

int main(void)
{
    int a = 10, b = 20;

    printf("Using a = %d and b = %d\n\n", a, b);

    printf("a == b is %d   (equal to)\n",     a == b);
    printf("a != b is %d   (not equal)\n",    a != b);
    printf("a >  b is %d   (greater than)\n", a >  b);
    printf("a <  b is %d   (less than)\n",    a <  b);
    printf("a >= b is %d   (greater or equal)\n", a >= b);
    printf("a <= b is %d   (less or equal)\n",    a <= b);

    /* In C any NON-ZERO value means true:
       printf("%d", 5);  -> condition true                     */
    if (a < b) {
        printf("\nSince a < b is 1 (true), a is the smaller one\n");
    }

    return 0;
}
