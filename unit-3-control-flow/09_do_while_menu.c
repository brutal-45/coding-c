/*
 * coding-c | Unit 3 - Control Flow
 * 09_do_while_menu.c
 * --------------------------------------------------------------
 * [Unit-III: Decision Making and Looping - do-while loop]
 *
 * do-while is an EXIT-CONTROLLED loop: the body runs FIRST and
 * the condition is checked AFTER - so the body always runs AT
 * LEAST ONCE.
 *
 * Syntax:
 *     do {
 *         ...body...
 *     } while (condition);      <- note the semicolon!
 *
 * Classic use: MENU programs - show the menu at least once and
 * repeat until the user chooses "exit".
 *
 * Expected Output:
 *   a small menu that responds to choices until 0 = exit
 * --------------------------------------------------------------
 */

#include <stdio.h>

int main(void)
{
    int choice;

    do
    {
        /* --- the menu is printed at least once -------------- */
        printf("\n===== MINI MENU =====\n");
        printf("1. Say hello twice\n");
        printf("2. Count 1 to 5\n");
        printf("3. Show a star line\n");
        printf("0. Exit\n");
        printf("Enter choice: ");

        if (scanf("%d", &choice) != 1) {   /* EOF/letters ->    */
            printf("Bye!\n");              /* stop the loop     */
            break;
        }

        switch (choice)
        {
            case 1:
                printf("Hello!\nHello!\n");
                break;
            case 2:
                for (int i = 1; i <= 5; i++)
                    printf("%d ", i);
                printf("\n");
                break;
            case 3:
                printf("* * * * * *\n");
                break;
            case 0:
                printf("Exiting... good bye!\n");
                break;
            default:
                printf("Wrong choice, try again.\n");
        }
    } while (choice != 0);     /* repeat until user picks 0     */

    return 0;
}
