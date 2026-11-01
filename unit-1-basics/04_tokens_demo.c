/*
 * coding-c | Unit 1 - Basics of C
 * 04_tokens_demo.c
 * --------------------------------------------------------------
 * [SPPU FPL Unit-I, Q6 - 3 Marks]
 * "Explain tokens in C programming."
 *
 * A token is the SMALLEST individual element of a C program
 * that is meaningful to the compiler.
 *
 * 6 kinds of tokens:
 *   1. Keyword      - reserved word with special meaning (int)
 *   2. Identifier   - user-defined name            (sum, a, b)
 *   3. Constant     - fixed value                  (10)
 *   4. Operator     - symbol that performs an op   (=, +, *)
 *   5. String       - text in double quotes        ("...")
 *   6. Punctuator   - special symbol               ( ; , ( ) { } )
 *
 * The statement:   int sum = a + b * 10 ;
 * has exactly 9 tokens:
 *   int | sum | = | a | + | b | * | 10 | ;
 *
 * Expected Output:
 *   a token-by-token breakdown of that statement
 * --------------------------------------------------------------
 */

#include <stdio.h>

int main(void)
{
    int a = 2;
    int b = 3;
    int sum = a + b * 10;   /* <-- the 9-token statement          */

    printf("Statement : int sum = a + b * 10 ;\n\n");
    printf("Token no.  Token    Type\n");
    printf("--------   -----    ----------------------------\n");
    printf("   1        int      Keyword (32 keywords in C89)\n");
    printf("   2        sum      Identifier (user-defined)\n");
    printf("   3        =        Assignment operator\n");
    printf("   4        a        Identifier\n");
    printf("   5        +        Arithmetic operator\n");
    printf("   6        b        Identifier\n");
    printf("   7        *        Arithmetic operator\n");
    printf("   8        10       Constant (integer)\n");
    printf("   9        ;        Punctuator (statement end)\n\n");

    printf("Total tokens = 9\n");
    printf("Rule: b * 10 is evaluated first (* before +),\n");
    printf("so sum = 2 + 30 = %d\n", sum);

    return 0;
}
