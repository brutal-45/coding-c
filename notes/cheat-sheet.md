# C Quick-Reference Cheat Sheet

One page to revise the night before the exam.

## 1. Data types & format specifiers

| Type | Size | Range | Format |
|------|------|-------|--------|
| `char` | 1 B | −128…127 | `%c` |
| `unsigned char` | 1 B | 0…255 | `%c` |
| `short int` | 2 B | −32768…32767 | `%hd` |
| `int` | 4 B | −2147483648…2147483647 | `%d` |
| `unsigned int` | 4 B | 0…4294967295 | `%u` |
| `long int` | 4 B | as int (platform-dependent) | `%ld` |
| `long long int` | 8 B | ±2⁶³ | `%lld` |
| `float` | 4 B | 3.4E−38…3.4E+38 | `%f` |
| `double` | 8 B | 1.7E−308…1.7E+308 | `%lf` |
| `long double` | 10 B | 3.4E−4932…3.4E+4932 | `%Lf` |

Range formula (n bits): signed `−2^(n−1) … 2^(n−1)−1` · unsigned `0 … 2^n−1`

## 2. The 32 keywords (ANSI C, lowercase)

```
auto      break     case      char      const     continue
default   do        double    else      enum      extern
float     for       goto      if        int       long
register  return    short     signed    sizeof    static
struct    switch    typedef   union     unsigned  void
volatile  while
```

## 3. Escape sequences

`\n` newline · `\t` horizontal tab · `\v` vertical tab · `\b` backspace ·
`\r` carriage return · `\f` form feed · `\a` alert(bell) · `\'` `'` ·
`\"` `"` · `\\` `\` · `\?` `?`

## 4. ASCII must-know

`'0'–'9'` = 48–57 · `'A'–'Z'` = 65–90 · `'a'–'z'` = 97–122 · space = 32 ·
`'\n'` = 10 · NUL = 0

## 5. Storage classes

| | auto | register | static | extern |
|--|------|----------|--------|--------|
| Storage | stack | CPU register | data segment | data segment |
| Default value | garbage | garbage | 0 | 0 |
| Scope | block | block | block / file | global |
| Lifetime | block | block | whole program | whole program |

## 6. Operators quick list

- **Arithmetic:** `+ - * / %` (int/int truncates; `%` ints only)
- **Relational:** `== != > < >= <=` → 1/0
- **Logical:** `&& || !` → 1/0, short-circuit
- **Assignment:** `= += -= *= /= %=` (right-to-left when chained)
- **Inc/Dec:** `++x  x++  --x  x--` (position = when the ±1 happens)
- **Ternary:** `cond ? a : b`
- **Bitwise:** `& | ^ ~ << >>` (`<<n` = ×2ⁿ, `>>n` = ÷2ⁿ)
- **Special:** `sizeof` `&` `,` `.` `->`

## 7. Precedence ladder (high → low)

`()` → `! ~ ++ -- (cast) sizeof unary&` → `* / %` → `+ -` → `<< >>` →
`< <= > >=` → `== !=` → `&` → `^` → `|` → `&&` → `||` → `?:` →
`= += -= …` → `,`

## 8. Syntax skeletons

```c
if (c) { } else { }                    /* branching          */
while (c) { }                          /* 0+ iterations      */
do { } while (c);                      /* 1+ iterations      */
for (init; cond; update) { }           /* known count        */
switch (x) { case 1: ...; break; default: ...; }
```

## 9. Loop comparison

| | while | for | do-while |
|--|-------|-----|----------|
| Type | entry-controlled | entry-controlled | exit-controlled |
| Min runs | 0 | 0 | 1 |
| Best for | unknown count | known count | menus |

## 10. Classic one-liners

```c
avg = (float)sum / count;            /* correct average        */
max = (a > b) ? a : b;               /* larger of two          */
if (n % 2 == 0)                      /* even test (or n&1==0)  */
while (scanf("%d", &x) == 1)         /* read until EOF/letter  */
rev = rev * 10 + n % 10; n /= 10;    /* reverse digits         */
fact *= i;                           /* factorial loop         */
```

## 11. Compile & run

```bash
gcc -Wall -Wextra program.c -o program   # compile with warnings
./program                                # run
make build                               # compile ALL repo programs
make test                                # smoke-run them all
```
