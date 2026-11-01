/*
 * coding-c | Unit 3 - Control Flow
 * 05_switch_calculator.c
 * --------------------------------------------------------------
 * [Unit-III: switch statement - the "simple calculator"
 *  program from the class notes]
 *
 * switch tests ONE integer/char expression against a list of
 * constant cases:
 *
 *     switch (choice) {
 *         case 1:  ...; break;
 *         case 2:  ...; break;
 *         default: ...;
 *     }
 *
 * Rules:
 *   - case values must be integer/char CONSTANTS (no ranges,
 *     no variables, no floats)
 *   - break exits the switch; WITHOUT it, execution FALLS
 *     THROUGH into the next case
 *   - default runs when no case matches (its position is free)
 *
 * Expected Output:
 *   Enter two numbers: 10 25
 *   1.Add 2.Sub 3.Mul 4.Div : 3
 *   10.00 * 25.00 = 250.00
 * --------------------------------------------------------------
 */

#include <stdio.h>

int main(void)
{
    double num1, num2;
    int choice;

    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &num1, &num2) != 2) {
        printf("Invalid input!\n");
        return 1;
    }

    printf("1.Add  2.Subtract  3.Multiply  4.Divide : ");
    if (scanf("%d", &choice) != 1) {
        printf("Invalid choice!\n");
        return 1;
    }

    switch (choice)
    {
        case 1:
            printf("%.2lf + %.2lf = %.2lf\n",
                    num1, num2, num1 + num2);
            break;                     /* try removing this     */

        case 2:
            printf("%.2lf - %.2lf = %.2lf\n",
                    num1, num2, num1 - num2);
            break;

        case 3:
            printf("%.2lf * %.2lf = %.2lf\n",
                    num1, num2, num1 * num2);
            break;

        case 4:
            if (num2 != 0)
                printf("%.2lf / %.2lf = %.2lf\n",
                        num1, num2, num1 / num2);
            else
                printf("Division by zero not possible!\n");
            break;

        default:
            printf("Invalid choice! Use 1-4.\n");
    }

    return 0;
}
