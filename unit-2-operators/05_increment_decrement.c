/*
 * coding-c | Unit 2 - Operators & Expressions
 * 05_increment_decrement.c
 * --------------------------------------------------------------
 * Increment/decrement operators (UNARY - one operand):
 *
 *   ++x  PRE-increment : use x+1 first, THEN use x
 *   x++  POST-increment: use x first, THEN x+1
 *   --x  PRE-decrement : use x-1 first, THEN use x
 *   x--  POST-decrement: use x first, THEN x-1
 *
 * Golden rule:
 *   The POSITION decides WHEN the +1/-1 happens.
 *
 * Expected Output:
 *   step-by-step traces of the classic exam examples
 * --------------------------------------------------------------
 */

#include <stdio.h>

int main(void)
{
    /* Example 1: post-increment                               */
    int a = 5, b;
    b = a++;               /* b gets OLD a (5), then a becomes 6 */
    printf("a=5; b = a++  ->  b = %d, a = %d\n", b, a);

    /* Example 2: pre-increment                                */
    a = 5;
    b = ++a;               /* a becomes 6 first, b gets 6        */
    printf("a=5; b = ++a  ->  b = %d, a = %d\n", b, a);

    /* Example 3: post- and pre-decrement                      */
    a = 5;
    b = a--;
    printf("a=5; b = a--  ->  b = %d, a = %d\n", b, a);

    a = 5;
    b = --a;
    printf("a=5; b = --a  ->  b = %d, a = %d\n", b, a);

    /* Example 4: EXAM TRAP - never do this in real code.
       Writing  int c = a++ + ++a;  in ONE expression is
       UNDEFINED BEHAVIOUR in C (the compiler may read/update 'a'
       in any order - gcc even refuses it with a warning).
       Trace the two parts separately instead:                  */
    a = 5;
    int p = a++;               /* p = 5 (old a), a becomes 6     */
    int q = ++a;               /* a becomes 7 first, q = 7       */
    printf("a=5; p = a++ -> p=%d, a=%d | q = ++a -> q=%d, a=%d\n",
            p, a, q, a);

    /* Loop counters: the most common real use                  */
    printf("\nfor loop with i++: ");
    for (int i = 1; i <= 3; i++) printf("%d ", i);

    printf("\nfor loop with ++j: ");
    for (int j = 1; j <= 3; ++j) printf("%d ", j);
    printf("\n(identical here - the difference only matters "
           "when the VALUE is used)\n");

    return 0;
}
