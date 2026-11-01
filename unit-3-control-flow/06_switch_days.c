/*
 * coding-c | Unit 3 - Control Flow
 * 06_switch_days.c
 * --------------------------------------------------------------
 * [Unit-III: switch statement - char cases and case grouping]
 *
 * Extra switch features shown here:
 *   1. switching on a CHAR variable
 *   2. grouping several cases to share one block:
 *        case 6: case 7:  weekend!
 *   3. fall-through behaviour when break is MISSING
 *
 * Expected Output:
 *   Enter day number (1-7): 6
 *   Saturday + Sunday = WEEKEND
 * --------------------------------------------------------------
 */

#include <stdio.h>

int main(void)
{
    int day;

    printf("Enter day number (1-7): ");
    if (scanf("%d", &day) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    switch (day)
    {
        case 1: printf("Monday\n");    break;
        case 2: printf("Tuesday\n");   break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n");  break;
        case 5: printf("Friday\n");    break;

        case 6:
        case 7: printf("Saturday + Sunday = WEEKEND\n");
                break;   /* one block shared by two cases      */

        default:
                printf("%d is not a valid day (1-7)!\n", day);
    }

    /* switch on char works the same way (vowel check):        */
    char letter = 'e';
    switch (letter) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("\n'%c' is a VOWEL\n", letter);
            break;
        default:
            printf("\n'%c' is a consonant\n", letter);
    }

    /* WARNING - missing break causes fall-through:
         case 1: printf("Mon");       <-- no break
         case 2: printf("Tue");       <-- day 1 prints MonTue!  */

    return 0;
}
