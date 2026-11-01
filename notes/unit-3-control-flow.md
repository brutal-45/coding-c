# Unit 3 — Control Flow

> Notes compiled from the class notes (Unit-III handwritten notes).
> Control flow = the order in which the statements of a program execute.

```
                    Decision Control Statements
                              |
        ┌─────────────────────┴──────────────────────┐
        ↓                                            ↓
 Decision Making & Branching          Decision Making & Looping
 (selection / conditional)            (iteration / repetition)
        |                                            |
 simple if, if-else, if-else-if,      while, do-while, for
 nested if, switch, goto              (+ break, continue)
```

---

## PART 1 — Decision Making & Branching

| Statement | Description |
|-----------|-------------|
| **if statement** | tests a specific condition; if true, the if-block executes |
| **if-else statement** | adds the false path: exactly one of the two blocks runs |
| **nested if-else** | an if-else placed *inside* another if-else |
| **if-else-if ladder** | checks multiple conditions in order; the **first true one** wins |
| **switch statement** | multi-way branch on one integer/char expression |
| **goto statement** | unconditional jump to a labelled statement |

### 1.1 Simple if
The condition is any valid logical expression evaluating to true (non-zero) or
false (zero).

```c
if (condition)
{
    statement 1;     /* executed only when condition is true */
    statement 2;
}
statement 3;         /* always executed */
```

### 1.2 if-else

```c
if (condition)
    block A;    /* condition true  */
else
    block B;    /* condition false */
```

### 1.3 Nested if
Enables the use of one if-else statement **inside** another if-else statement.

```c
if (outer condition)
{
    if (inner condition)  { ... }
    else                  { ... }
}
```

### 1.4 if-else-if ladder
Checks multiple conditions and executes the specific block for the **true
condition** among them. Order matters — test from the highest boundary down.

```c
if      (percentage >= 75)  printf("Distinction");
else if (percentage >= 60)  printf("First Class");
else if (percentage >= 50)  printf("Second Class");
else if (percentage >= 40)  printf("Pass");
else                        printf("Fail");
```

### 1.5 switch statement
```c
switch (choice)
{
    case 1:  statements; break;
    case 2:  statements; break;
    default: statements;
}
```

Rules (exam favourites):
- controlling expression must be **int / char** (no float, no string);
- case labels are **constant** values, no two cases may be equal;
- `break` exits the switch — **without it control falls through** to the next case;
- `default` runs when no case matches;
- several cases can share one block: `case 6: case 7: ...`

### 1.6 goto statement
```c
goto end;      /* jump */
...
end:  printf("finished");   /* label */
```
Unconditional jump — use sparingly; it makes program logic hard to follow.
(Used mainly for centralised error handling.)

---

## PART 2 — Decision Making & Looping
A **loop** repeats a block of statements while a condition holds.

| Loop | Type | Condition checked | Body runs at least |
|------|------|-------------------|--------------------|
| `while` | entry-controlled | **before** each iteration | 0 times |
| `for` | entry-controlled | **before** each iteration | 0 times |
| `do-while` | exit-controlled | **after** each iteration | **1 time** |

Every loop needs 3 parts: **initialisation → condition → update**
(forgetting the update = infinite loop!).

### 2.1 while
```c
i = 1;                 /* initialisation */
while (i <= n)         /* condition      */
{
    sum = sum + i;
    i++;               /* update         */
}
```

### 2.2 do-while
```c
do {
    printf("menu...");       /* body first  */
} while (choice != 0);       /* then check  */
```
Classic use: **menu-driven programs** — the menu must appear at least once.

### 2.3 for
All three loop parts on one line — best when the count is known:
```c
for (i = 1; i <= n; i++)
    printf("%d ", i);

for (i = 0, j = 10; i < j; i++, j--)   /* multiple variables */
```

### 2.4 Nested loops
A loop inside a loop: the inner loop finishes **all** its repetitions for
**every single** step of the outer loop. Total inner executions e.g.
`1+2+...+r` for triangle patterns.

---

## PART 3 — break and continue

| Statement | Effect |
|-----------|--------|
| `break` | terminates the **whole** loop (or switch) immediately |
| `continue` | skips the rest of the **current iteration** only; loop continues |

```c
for (i = 1; i <= 10; i++) {
    if (i == 7)  break;       /* loop stops at 7          */
    printf("%d ", i);         /* prints 1 2 3 4 5 6       */
}
for (i = 1; i <= 10; i++) {
    if (i % 3 == 0) continue; /* skip 3,6,9               */
    printf("%d ", i);         /* prints 1 2 4 5 7 8 10    */
}
```

---

## PART 4 — Standard Programs (from the notes)

**1. Simple calculator** → `05_switch_calculator.c`
Read two numbers, show a menu (+ − × ÷), switch on the choice, guard division
by zero, `default:` for invalid choices.

**2. Generating a calendar** → `14_calendar_generator.c`
Read the weekday of the 1st (1–7) and number of days (28–31); print blanks for
the first `startDay − 1` slots, then dates 1..days with a new line after every
7 columns (nested loop + condition).

Other classics: largest of two (if-else), grade from marks (ladder),
factorial / sum of N (for), reverse menu (do-while), prime check (loop+break),
star patterns (nested loops).
