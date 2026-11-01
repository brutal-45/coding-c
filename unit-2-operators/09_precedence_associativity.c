/*
 * coding-c | Unit 2 - Operators & Expressions
 * 09_precedence_associativity.c
 * --------------------------------------------------------------
 * Operator PRECEDENCE decides which operator is applied first
 * in an expression with mixed operators.
 * ASSOCIATIVITY decides the order when precedence is equal:
 *   arithmetic -> left to right
 *   assignment -> right to left
 *
 * Quick precedence ladder (highest first):
 *   ()  []            1. brackets
 *   ! ~ ++ -- (cast)  2. unary
 *   * / %             3. multiplicative
 *   + -               4. additive
 *   << >>             5. shift
 *   < <= > >=         6. relational
 *   == !=             7. equality
 *   &&                8. logical AND
 *   ||                9. logical OR
 *   ? :              10. ternary
 *   = += -= ...      11. assignment (right to left)
 *   ,                12. comma
 *
 * Expected Output:
 *   each classic expression with its value and explanation
 * --------------------------------------------------------------
 */

#include <stdio.h>

int main(void)
{
    printf("Expression                 Value   Why\n");
    printf("-------------------------- -----   ------------------\n");

    printf("10 + 4 * 2                 %5d   * before +\n",
            10 + 4 * 2);                       /* 18 */
    printf("(10 + 4) * 2               %5d   brackets first\n",
            (10 + 4) * 2);                     /* 28 */
    printf("10 / 5 * 2                 %5d   equal level -> left to right\n",
            10 / 5 * 2);                       /* 4  */
    printf("5 * 3 %% 2                 %5d   * then %%\n",
            5 * 3 % 2);                        /* 1  */
    printf("10 %% 3 + 4 * 2            %5d   %% and * then +\n",
            10 % 3 + 4 * 2);                   /* 9  */
    printf("2 + 3 > 4                  %5d   + before >\n",
            2 + 3 > 4);                        /* 1  */
    printf("2 + 3 > 4 && 5 > 3         %5d   && last\n",
            2 + 3 > 4 && 5 > 3);               /* 1  */
    printf("10 > 5 || 3 > 7 && 1       %5d   && before ||\n",
            (10 > 5) || (3 > 7 && 1));     /* 1 - parentheses only
                                              document what the
                                              compiler does anyway */

    /* Unary operators bind tighter than * /                    */
    int a = 5;
    printf("-a * 2 (a=5)               %5d   unary - first\n",
            -a * 2);                           /* -10 */

    /* Assignment associativity: right to left                  */
    int x, y;
    x = y = 7;
    printf("x = y = 7                  x=%d y=%d  right to left\n",
            x, y);

    return 0;
}
