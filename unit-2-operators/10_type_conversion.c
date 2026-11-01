/*
 * coding-c | Unit 2 - Operators & Expressions
 * 10_type_conversion.c
 * --------------------------------------------------------------
 * Type conversion (type casting) - mixing types in expressions.
 *
 * 1. IMPLICIT conversion (automatic, by the compiler):
 *    - lower type is promoted to the higher type
 *    - ladder: char -> int -> float -> double
 *    - 9 / 5        = 1      (int / int = int!)
 *    - 9.0 / 5      = 1.8    (int promoted to double)
 *
 * 2. EXPLICIT conversion (cast, done by the programmer):
 *    - (float)9 / 5 = 1.8
 *    - classic use: correct average = (float)sum / count
 *
 * 3. Assignment conversion: float -> int TRUNCATES (chops the
 *    fraction), it does NOT round.
 *
 * Expected Output:
 *   the three situations demonstrated with numbers
 * --------------------------------------------------------------
 */

#include <stdio.h>

int main(void)
{
    /* 1. Implicit conversion ---------------------------------- */
    printf("--- Implicit conversion ---\n");
    printf("9 / 5     = %d    (integer division)\n", 9 / 5);
    printf("9.0 / 5   = %.1f  (9 promoted to double)\n", 9.0 / 5);
    printf("9 / 5.0   = %.1f  (5 promoted to double)\n", 9 / 5.0);

    char c = 'A';
    int  ascii = c + 1;        /* char 'A'(65) promoted to int  */
    printf("'A' + 1 = %d  -> as char: %c\n", ascii, ascii);

    /* 2. Explicit conversion (cast) ---------------------------- */
    printf("\n--- Explicit cast ---\n");
    printf("(float)9 / 5  = %.1f\n", (float)9 / 5);
    printf("(int)7.9      = %d  (fraction chopped)\n", (int)7.9);

    /* 3. Average of three ints - THE classic cast example ----- */
    int totalMarks  = 250;
    int noSubjects  = 3;

    int   wrongAvg = totalMarks / noSubjects;        /* 83 (int) */
    float rightAvg = (float)totalMarks / noSubjects; /* 83.33    */
    printf("\ntotal=%d subjects=%d\n", totalMarks, noSubjects);
    printf("wrong avg (int division)   : %d\n", wrongAvg);
    printf("right avg (float cast)     : %.2f\n", rightAvg);

    /* 4. Assignment conversion --------------------------------- */
    float price = 99.99f;
    int rounded = price;              /* stores 99, NOT 100!    */
    printf("\nint rounded = price(99.99) stores %d "
           "(truncation, not rounding)\n", rounded);

    return 0;
}
