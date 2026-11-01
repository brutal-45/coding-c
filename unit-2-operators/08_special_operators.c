/*
 * coding-c | Unit 2 - Operators & Expressions
 * 08_special_operators.c
 * --------------------------------------------------------------
 * Special / miscellaneous operators:
 *
 *   sizeof    - unary, gives memory size of a type/variable
 *   &         - address-of operator (gives the memory address)
 *   *         - used with & for pointers (Unit on pointers)
 *   ,  comma  - separates expressions; evaluates left to right
 *   .  ->     - member operators (structs - later unit)
 *
 * Expected Output:
 *   sizes of every basic type, addresses of variables,
 *   comma-operator demo
 * --------------------------------------------------------------
 */

#include <stdio.h>

int main(void)
{
    /* 1. sizeof ----------------------------------------------- */
    printf("--- sizeof operator (bytes) ---\n");
    printf("sizeof(int)    = %zu\n", sizeof(int));
    printf("sizeof(char)   = %zu\n", sizeof(char));
    printf("sizeof(float)  = %zu\n", sizeof(float));
    printf("sizeof(double) = %zu\n", sizeof(double));
    printf("sizeof(3.14)   = %zu  (real constants are double)\n",
            sizeof(3.14));

    /* 2. & address-of ------------------------------------------ */
    int age = 20;
    printf("\n--- & address-of operator ---\n");
    printf("value of age      : %d\n", age);
    printf("address of age (&): %p\n", (void*)&age);
    /* %p prints a pointer - cast to (void*) is the clean way  */

    /* 3. comma operator --------------------------------------- */
    /* evaluates left to right; the LAST expression is the value */
    int t = (age = 2, age + 3);       /* age becomes 2, then 2+3 */
    printf("\n--- comma operator ---\n");
    printf("t = (age = 2, age + 3) = %d\n", t);

    /* 4. conditional, assignment etc. are covered in their own
       programs - this file completes the "special" category.  */

    return 0;
}
