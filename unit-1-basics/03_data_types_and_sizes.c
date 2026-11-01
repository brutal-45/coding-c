/*
 * coding-c | Unit 1 - Basics of C
 * 03_data_types_and_sizes.c
 * --------------------------------------------------------------
 * [SPPU FPL Unit-I, Q4 - 4 Marks]
 * "Explain data types in C."
 *
 * A data type defines WHICH type of data a variable stores,
 * HOW MUCH memory it needs, and WHICH operations are allowed.
 *
 * Categories:
 *   1. Basic / Primary  : int, char, float, double
 *   2. Derived          : array, function, pointer
 *   3. User-defined     : struct, union, enum, typedef
 *   4. void             : "empty" type, no value
 *
 * Modifiers change the size/range of a basic type:
 *   short, long, signed, unsigned
 *
 * Expected Output (sizes are for a typical 64-bit Linux/gcc):
 *   a table of types, sizes and example values
 * --------------------------------------------------------------
 */

#include <stdio.h>
#include <limits.h>      /* INT_MIN, INT_MAX, CHAR_MAX ...      */

int main(void)
{
    int     age      = 20;
    char    grade    = 'A';
    float   percent  = 85.75f;
    double  pi       = 3.141592653589793;
    short   s        = 32767;
    long    big      = 100000L;
    long long veryBig = 9000000000LL;
    unsigned int u    = 4000000000u;

    printf("---- Sizes (bytes) on this machine ----\n");
    printf("char        : %zu byte  (range %d..%d)\n",
            sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("short int   : %zu bytes (range %d..%d)\n",
            sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("int         : %zu bytes (range %d..%d)\n",
            sizeof(int), INT_MIN, INT_MAX);
    printf("long int    : %zu bytes\n", sizeof(long));
    printf("long long   : %zu bytes (range %lld..%lld)\n",
            sizeof(long long), LLONG_MIN, LLONG_MAX);
    printf("float       : %zu bytes\n", sizeof(float));
    printf("double      : %zu bytes\n", sizeof(double));

    printf("\n---- Example values ----\n");
    printf("age     (int)     = %d\n", age);
    printf("grade   (char)    = %c  (ASCII %d)\n", grade, grade);
    printf("percent (float)   = %f\n", percent);
    printf("pi      (double)  = %.15lf\n", pi);
    printf("s       (short)   = %d\n", s);
    printf("big     (long)    = %ld\n", big);
    printf("veryBig (longlong)= %lld\n", veryBig);
    printf("u       (unsigned)= %u\n", u);

    /* Tip: %zu is the correct specifier for sizeof results.   */
    return 0;
}
