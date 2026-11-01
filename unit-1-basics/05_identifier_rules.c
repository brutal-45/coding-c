/*
 * coding-c | Unit 1 - Basics of C
 * 05_identifier_rules.c
 * --------------------------------------------------------------
 * [SPPU FPL Unit-I, Q3 - 4 Marks]
 * "Define an identifier in C. Explain rules of naming an
 *  identifier."
 *
 * Definition:
 *   An identifier is a user-defined name given to a variable,
 *   function, array, structure etc.
 *
 * Rules:
 *   R1. May contain letters (a-z, A-Z), digits (0-9), and '_'
 *   R2. First character must be a letter or '_' (never a digit)
 *   R3. No spaces or special symbols (@ , . - etc.)
 *   R4. Keywords (int, return, float...) cannot be identifiers
 *   R5. C is case-sensitive: 'sum' and 'Sum' are DIFFERENT
 *   R6. Advisable length: up to ~8-32 characters, meaningful
 *
 * Expected Output:
 *   the valid identifiers from the class notes test, printed
 * --------------------------------------------------------------
 */

#include <stdio.h>

int main(void)
{
    /* VALID identifiers (from the class test) ---------------- */
    int Ram             = 1;
    int SACHIN          = 2;
    int Data123         = 3;
    int Programmer_01   = 4;
    int _user1          = 5;
    int DiV_E_Students  = 6;
    int Return          = 7;   /* OK! 'Return' != keyword 'return' */

    printf("VALID identifiers used in this program:\n");
    printf("  Ram            = %d\n", Ram);
    printf("  SACHIN         = %d\n", SACHIN);
    printf("  Data123        = %d\n", Data123);
    printf("  Programmer_01  = %d\n", Programmer_01);
    printf("  _user1         = %d\n", _user1);
    printf("  DiV_E_Students = %d\n", DiV_E_Students);
    printf("  Return         = %d  (case-sensitive: legal)\n", Return);

    /* INVALID identifiers - these would NOT compile: ----------
       123          -> cannot start with a digit        (R2)
       07Thala      -> cannot start with a digit        (R2)
       File name    -> space not allowed                (R3)
       Kiran@123    -> '@' is a special symbol          (R3)
       return       -> it is a keyword                  (R4)
       float        -> it is a keyword                  (R4)
    ------------------------------------------------------------*/

    return 0;
}
