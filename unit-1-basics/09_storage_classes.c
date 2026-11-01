/*
 * coding-c | Unit 1 - Basics of C
 * 09_storage_classes.c
 * --------------------------------------------------------------
 * [SPPU FPL Unit-I, Q7 - 4 Marks]
 * "Explain different storage classes in C."
 *
 * A variable in C is fully defined by its data type AND its
 * storage class. The storage class tells us 4 things:
 *   1. Storage  : RAM/stack, CPU register, or data segment
 *   2. Default initial value : garbage or zero
 *   3. Scope    : where the variable is visible
 *   4. Lifetime : how long the variable exists
 *
 * The 4 storage classes:
 *   auto     - default for locals; stack; garbage value;
 *              block scope; lifetime = the block
 *   register - requests CPU register for fast access; block
 *              scope; NO & (address-of) allowed
 *   static   - data segment; default 0; value PERSISTS between
 *              function calls; local static = block scope,
 *              global static = file scope
 *   extern   - global, visible across functions/files; data
 *              segment; default 0; lifetime = whole program
 *
 * Expected Output:
 *   global_count = 0 (extern default)
 *   static counter called 3 times -> 1 2 3
 *   register loop runs 3 times
 * --------------------------------------------------------------
 */

#include <stdio.h>

int global_count;            /* extern class: default value 0 */

void counter(void)
{
    static int calls = 0;    /* static: initialized ONCE only  */
    calls++;                 /* value survives between calls   */
    printf("static counter call no. %d\n", calls);
}

int main(void)
{
    /* ---- extern (global) ----------------------------------- */
    printf("global_count = %d  (extern: default 0)\n",
            global_count);
    global_count = 10;
    printf("global_count = %d after assignment\n\n", global_count);

    /* ---- static --------------------------------------------- */
    counter();               /* prints 1                        */
    counter();               /* prints 2 - value was retained!  */
    counter();               /* prints 3                        */

    /* ---- register ------------------------------------------- */
    printf("\nregister loop: ");
    for (register int i = 0; i < 3; i++) {
        printf("%d ", i);
    }
    /* register int r = 5; printf("%p", &r);  <- ILLEGAL:
       you cannot take the address of a register variable.    */

    /* ---- auto (default) ------------------------------------- */
    auto int local_auto = 42;   /* 'auto' keyword is optional -
                                   a plain local variable IS auto */
    printf("\n\nlocal_auto = %d (auto: block scope, garbage "
           "value if not initialized)\n", local_auto);

    return 0;
}
