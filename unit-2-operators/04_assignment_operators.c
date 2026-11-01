/*
 * coding-c | Unit 2 - Operators & Expressions
 * 04_assignment_operators.c
 * --------------------------------------------------------------
 * Assignment operators store a value into a variable.
 *
 *   =    simple assignment       a = 10
 *   +=   add AND assign          a += 5   is  a = a + 5
 *   -=   subtract AND assign     a -= 3   is  a = a - 3
 *   *=   multiply AND assign     a *= 2   is  a = a * 2
 *   /=   divide AND assign       a /= 4   is  a = a / 4
 *   %=   modulus AND assign      a %= 3   is  a = a % 3
 *
 * Multiple assignment works right-to-left: a = b = c = 10;
 *
 * Expected Output:
 *   value of a traced after every compound assignment
 * --------------------------------------------------------------
 */

#include <stdio.h>

int main(void)
{
    int a = 10;
    int b, c;

    printf("start          : a = %d\n", a);

    a += 5;   printf("after a += 5   : a = %d\n", a);   /* 15 */
    a -= 3;   printf("after a -= 3   : a = %d\n", a);   /* 12 */
    a *= 2;   printf("after a *= 2   : a = %d\n", a);   /* 24 */
    a /= 4;   printf("after a /= 4   : a = %d\n", a);   /* 6  */
    a %= 3;   printf("after a %%= 3   : a = %d\n", a);   /* 0  */

    /* multiple (chained) assignment: right to left            */
    b = c = a = 10;
    printf("\nafter a = b = c = 10 -> a=%d, b=%d, c=%d\n",
            a, b, c);

    /* '=' returns the assigned value, so it can be chained;
       but NEVER confuse it with '==' inside a condition!      */
    return 0;
}
