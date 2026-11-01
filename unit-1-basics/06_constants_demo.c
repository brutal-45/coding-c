/*
 * coding-c | Unit 1 - Basics of C
 * 06_constants_demo.c
 * --------------------------------------------------------------
 * [SPPU FPL Unit-I, Q8 - 4 Marks]
 * "Define a constant in C. What are the different types of
 *  constants in C?"
 *
 * A constant is a value that stays FIXED during program
 * execution.
 *
 * Types:
 *   1. Integer constants : decimal (100), octal (0144),
 *                          hexadecimal (0x64)
 *   2. Real constants    : fractional (3.14),
 *                          exponential (1.2e-4)
 *   3. Character const.  : single char in ' ' ('A')
 *   4. String constants  : text in " " ("Hello")
 *   5. Backslash (escape): \n \t \" \\ etc.
 *
 * Expected Output:
 *   demonstrates every type with correct format specifiers
 * --------------------------------------------------------------
 */

#include <stdio.h>

int main(void)
{
    /* 1. Integer constants (same value 100, three bases) ----- */
    int decimal = 100;      /* base 10 : digits 0-9             */
    int octal   = 0144;     /* base 8  : starts with 0          */
    int hexa    = 0x64;     /* base 16: 0x/0X, digits 0-9 A-F   */

    printf("--- Integer constants ---\n");
    printf("decimal 100 -> %%d: %d | %%o: %o | %%x: %x\n",
            decimal, decimal, decimal);
    printf("octal   0144 -> %%d: %d (0144 in base 8)\n", octal);
    printf("hex    0x64  -> %%d: %d (0x64 in base 16)\n", hexa);

    /* 2. Real constants -------------------------------------- */
    float  fractional  = 3.14f;   /* decimal point form          */
    double exponential = 1.2e-4;  /* mantissa e exponent form    */

    printf("\n--- Real constants ---\n");
    printf("fractional   3.14    = %f\n", fractional);
    printf("exponential  1.2e-4  = %f ( = 0.00012 )\n", exponential);
    printf("exponential printed with %%e = %e\n", fractional);

    /* 3. Character constants (stored as ASCII values) -------- */
    printf("\n--- Character constants ---\n");
    printf("'A' = %c (ASCII %d)\n", 'A', 'A');
    printf("'9' = %c (ASCII %d)  <- a DIGIT as a character!\n",
            '9', '9');
    printf("' ' = space (ASCII %d)\n", ' ');

    /* 4. String constants ------------------------------------ */
    printf("\n--- String constant ---\n");
    printf("%s and %s are string constants\n", "Hello", "123");

    /* 5. Escape (backslash) sequence constants --------------- */
    printf("\n--- Escape sequences ---\n");
    printf("New line -> done\n");
    printf("Horizontal tab ->A\tB\tC\n");
    printf("Quote inside string: \"C is fun\"\n");
    printf("Backslash itself: C:\\TC\\BIN\n");

    return 0;
}
