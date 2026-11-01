/*
 * coding-c | Unit 3 - Control Flow
 * 13_prime_check.c
 * --------------------------------------------------------------
 * [Unit-III: full program - branching + looping + break]
 * Classic exam program: check whether a number is PRIME.
 *
 * Logic:
 *   A prime number (>1) is divisible only by 1 and itself.
 *   Try divisors 2 .. n-1 (or smarter: up to sqrt(n));
 *   the FIRST divisor found proves n is composite and
 *   break exits the loop immediately.
 *
 * Algorithm:
 *   1. Start            2. Input n
 *   3. isPrime = 1, i = 2
 *   4. while i < n:  if n % i == 0 -> isPrime = 0, break
 *                    else i++
 *   5. isPrime ? print prime : print not prime
 *   6. Stop
 *
 * Expected Output:
 *   Enter a number: 13
 *   13 is a PRIME number
 * --------------------------------------------------------------
 */

#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    if (n <= 1) {                       /* 0, 1 and negatives    */
        printf("%d is NOT a prime number\n", n);
        return 0;
    }

    int isPrime = 1;                    /* assume prime          */
    for (int i = 2; i * i <= n; i++) {  /* smart limit: sqrt(n)  */
        if (n % i == 0) {
            isPrime = 0;                /* found a divisor       */
            printf("Divisor found: %d -> ", i);
            break;                      /* no need to continue   */
        }
    }

    if (isPrime)
        printf("%d is a PRIME number\n", n);
    else
        printf("%d is NOT a prime number\n", n);

    /* Bonus: list all prime numbers from 2 to 20 ------------- */
    printf("\nPrimes between 2 and 20: ");
    for (int num = 2; num <= 20; num++) {
        int prime = 1;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) { prime = 0; break; }
        }
        if (prime) printf("%d ", num);
    }
    printf("\n");

    return 0;
}
