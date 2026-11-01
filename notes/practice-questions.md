# Practice Question Bank (Units I–III)

> Extra practice with **hints only** — solve them yourself, then compare with
> the closest program in the repo. Exam-weight: ⭐⭐ = asked very often.

## Unit I — Basics of C

| # | Question | Hint | Related program |
|---|----------|------|-----------------|
| 1 | Write an algorithm to find the average of 3 numbers | sum first, divide, then print | `02_algorithm_addition.c` |
| 2 | Draw a flowchart to find the largest of two numbers | one decision diamond, two branches | notes §1.2 |
| 3 | State the rules for naming a variable with 3 valid & 3 invalid examples | start char, no space/@, no keywords | `05_identifier_rules.c` |
| 4 | ⭐⭐ List all 32 keywords of C | 6 per row × 5 rows + 2 | notes §4.1 |
| 5 | Write the ASCII values of 'A', 'a', '0', ' ' | 65 / 97 / 48 / 32 | `06_constants_demo.c` |
| 6 | Classify: `0x1A`, `0343`, `'9'`, `"9"`, `1.2e-4`, `7,000` | hex, octal, char, string, exponential, invalid | `06_constants_demo.c` |
| 7 | ⭐⭐ Compare `auto`, `register`, `static`, `extern` (4 columns) | storage, default value, scope, lifetime | `09_storage_classes.c` |
| 8 | Explain `#define` rules; why no semicolon? | it's a preprocessor directive, not a statement | `07_symbolic_constants.c` |
| 9 | Difference between `#define MAX 100` and `const int max = 100;` | memory, scope, debugging | notes §12 |
| 10 | When is `volatile` necessary? Give 2 situations | value changes outside the program | `08_const_and_volatile.c` |

## Unit II — Operators & Expressions

| # | Question | Hint | Related program |
|---|----------|------|-----------------|
| 1 | ⭐⭐ Evaluate: `5 + 3 * 2`, `(5 + 3) * 2`, `10 / 4`, `10 % 4`, `10 / 4.0` | precedence; int vs real division | `09_precedence_associativity.c` |
| 2 | Predict output with a = 5: `b = a++ + ++a;` | post uses 5, pre makes 7 → trace carefully | `05_increment_decrement.c` |
| 3 | ⭐ Explain unary, binary, ternary operators with one example each | count the operands | notes §1 |
| 4 | Write a truth table of `&&`, `\|\|`, `!` | 4 rows | `03_logical_operators.c` |
| 5 | Rewrite `x = x * (y + 5);` using a compound operator | there is no `*=` for an expression — expand first | `04_assignment_operators.c` |
| 6 | ⭐⭐ Compute `12 & 10`, `12 \| 10`, `12 ^ 10`, `12 << 2`, `12 >> 2` | write binary 1100, 1010 first | `07_bitwise_operators.c` |
| 7 | Find the largest of 3 numbers using only the ternary operator | nested `?:` | `06_ternary_operator.c` |
| 8 | Why does `int x = 7 / 2;` give 3 but `7.0 / 2` gives 3.5? | integer vs real arithmetic | `01_arithmetic_operators.c`, `10_type_conversion.c` |
| 9 | What does `printf("%d", 10 > 5 \|\| 3 > 7);` print? | `||` result is 1/0 | `02_relational_operators.c` |
| 10 | Convert implicitly vs explicitly: `sum = 250; n = 3; avg = sum/n;` | cast one operand to float | `10_type_conversion.c` |

## Unit III — Control Flow

| # | Question | Hint | Related program |
|---|----------|------|-----------------|
| 1 | ⭐⭐ Program: read a year, print leap year or not | `y%400==0 \|\| (y%4==0 && y%100!=0)` | uses if-else |
| 2 | ⭐⭐ Program: read 3 numbers, print the largest | nested if or ladder | `03_else_if_ladder.c`, `04_nested_if.c` |
| 3 | Program: read a character, print VOWEL/CONSONANT (switch) | group cases `case 'a': case 'e': ...` | `06_switch_days.c` |
| 4 | Why is do-while preferred for menus? | body must run at least once | `09_do_while_menu.c` |
| 5 | ⭐⭐ Program: sum of even numbers from 1 to N | for loop + `i % 2 == 0` | `08_while_loop.c`, `10_for_loop.c` |
| 6 | Program: reverse a number (e.g. 123 → 321) | `rev = rev*10 + n%10; n /= 10;` in a while | `08_while_loop.c` |
| 7 | ⭐⭐ Program: print pattern 1, 22, 333, 4444 … (n rows) | outer i, inner j ≤ i, print i | `11_nested_loop_patterns.c` |
| 8 | Program: factorial of N without recursion | product loop `fact *= i` | `10_for_loop.c` |
| 9 | Difference between break and continue with one example each | whole loop vs current iteration | `12_break_continue.c` |
| 10 | ⭐ Program: print all Armstrong numbers up to 999 | 3-digit: sum of cubes of digits = number | `13_prime_check.c` (structure) |
| 11 | Program: multiplication table of N in the format `5 x 3 = 15` | for loop 1..10 | `08_while_loop.c` |
| 12 | What happens if you forget `break` in a switch case? | fall-through — next case also runs | `05_switch_calculator.c` |
