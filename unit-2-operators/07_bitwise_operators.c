/*
 * coding-c | Unit 2 - Operators & Expressions
 * 07_bitwise_operators.c
 * --------------------------------------------------------------
 * Bitwise operators work on the individual BINARY BITS of
 * integer values (fast, used in embedded/systems code).
 *
 *   &   AND   - bit is 1 only if BOTH bits are 1
 *   |   OR    - bit is 1 if ANY bit is 1
 *   ^   XOR   - bit is 1 if the bits are DIFFERENT
 *   ~   NOT   - flips every bit (unary)
 *   <<  left shift  - a << n  = a * 2^n
 *   >>  right shift - a >> n  = a / 2^n
 *
 * Example with a = 12 (1100) and b = 10 (1010):
 *   12 & 10 = 8 (1000) | 12 | 10 = 14 (1110) | 12 ^ 10 = 6 (0110)
 *
 * Expected Output:
 *   all six results + decimal AND binary display
 * --------------------------------------------------------------
 */

#include <stdio.h>

/* small helper: print an int in binary (loop preview - Unit 3) */
void print_binary(unsigned int n)
{
    for (int i = 7; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
}

int main(void)
{
    int a = 12, b = 10;          /* 12 = 1100, 10 = 1010        */

    printf("a = %d = ", a); print_binary(a); printf("\n");
    printf("b = %d = ", b); print_binary(b); printf("\n\n");

    printf("a & b  = %2d = ", a & b);  print_binary(a & b);  printf("   (AND)\n");
    printf("a | b  = %2d = ", a | b);  print_binary(a | b);  printf("   (OR)\n");
    printf("a ^ b  = %2d = ", a ^ b);  print_binary(a ^ b);  printf("   (XOR)\n");
    printf("~a     = %2d    (NOT: flips bits, = -13)\n", ~a);
    printf("a << 1 = %2d = ", a << 1); print_binary(a << 1); printf("   (12 * 2)\n");
    printf("a >> 1 = %2d = ", a >> 1); print_binary(a >> 1); printf("   (12 / 2)\n");

    /* Practical tricks:                                        */
    printf("\nTricks: (n & 1) tests EVEN/ODD: %d is %s\n",
            a, (a & 1) ? "odd" : "even");
    printf("n << 3 multiplies by 8: 5 << 3 = %d\n", 5 << 3);

    return 0;
}
