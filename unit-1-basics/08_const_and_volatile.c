/*
 * coding-c | Unit 1 - Basics of C
 * 08_const_and_volatile.c
 * --------------------------------------------------------------
 * [SPPU FPL Unit-I topics:
 *   - Declaring a Variable as Constant
 *   - Declaring a Variable as Volatile]
 *
 * const variable:
 *   - value CANNOT be changed after initialization
 *   - must be initialized at declaration itself
 *   - any attempt to modify it = compile-time error
 *   - example: const int Max_Value = 100;
 *
 * volatile variable:
 *   - tells the compiler its value may change from OUTSIDE
 *     the program (hardware registers, ISRs, embedded systems)
 *   - compiler therefore skips optimization/caching for it
 *   - example: volatile int no_of_vehicles;
 *
 * Expected Output:
 *   Max_Value = 100
 *   no_of_vehicles = 5
 * --------------------------------------------------------------
 */

#include <stdio.h>

int main(void)
{
    /* const: initialize AT declaration, never change it later */
    const int Max_Value = 100;
    printf("Max_Value (const) = %d\n", Max_Value);

    /* This line would FAIL to compile - try uncommenting it:
       Max_Value = 200;      error: assignment of read-only
                             variable 'Max_Value'
    */

    /* const + pointer preview (used in arrays/functions too):
       const float PI = 3.14159f;  is also common practice.   */
    const float PI = 3.14159f;
    printf("PI (const) = %.5f\n", PI);

    /* volatile: value may be altered by an external source    */
    volatile int no_of_vehicles = 5;
    printf("no_of_vehicles (volatile) = %d\n", no_of_vehicles);

    /* We CAN assign to a volatile variable in our own code;
       the keyword only stops the compiler from ASSUMING the
       value is unchanged between two reads.                  */
    no_of_vehicles = 7;
    printf("no_of_vehicles updated    = %d\n", no_of_vehicles);

    return 0;
}
