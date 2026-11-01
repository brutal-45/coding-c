/*
 * coding-c | Unit 3 - Control Flow
 * 02_if_else.c
 * --------------------------------------------------------------
 * [Unit-III: Decision Making and Branching - if-else]
 * (Also solves the classic Unit-1 flowchart: larger of two)
 *
 * Syntax:
 *     if (condition)
 *         block A;     <- runs when condition is TRUE
 *     else
 *         block B;     <- runs when condition is FALSE
 *
 * Exactly ONE of the two blocks executes.
 *
 * Expected Output:
 *   Enter two numbers: 10 25
 *   25 is greater than 10
 * --------------------------------------------------------------
 */

#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input!\n");
        return 1;
    }

    if (a > b) {
        printf("%d is greater than %d\n", a, b);
    }
    else {
        printf("%d is greater than %d (or equal)\n", b, a);
    }

    /* One-line if-else bodies are common:
         if (a > b) printf("A big\n"); else printf("B big\n);   */

    return 0;
}
