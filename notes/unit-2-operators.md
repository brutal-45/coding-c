# Unit 2 — Operators & Expressions

> Notes compiled from the class notes (Unit-II handwritten notes).

---

## 1. What is an Operator?
An **operator** in C is a symbol that helps us perform some specific
mathematical, relational, bitwise, conditional or logical computation on
**operands** (the values/variables used with the operator).

```
        operator
           ↓
    x =  y  +  3
        ↑        ↑
     operand   operand
```

Operators are classified **by the number of operands**:

| Class | Operands | Examples |
|-------|----------|----------|
| **Unary** | 1 | `++  --  !  ~  sizeof  &` |
| **Binary** | 2 | `+  -  *  /  %  ==  &&  =` |
| **Ternary** | 3 | `? :` (the only ternary operator in C) |

...and **by what they do** (the 8 exam categories):

| Type | Description |
|------|-------------|
| Arithmetic | mathematical calculation — add, subtract, multiply, divide, modulus |
| Relational | compares the values of two variables |
| Logical | performs logical operations (&&, \|\|, !) |
| Assignment | assigns a value to a variable (=, +=, -=…) |
| Conditional | ternary `? :` returns one value if true, another if false |
| Bitwise | operates on individual bits (&, \|, ^, ~, <<, >>) |
| Special | sizeof, address-of (&), comma, member (., ->) |
| Increment/Decrement | increases/decreases the value by 1 (++, --) |

---

## 2. Arithmetic Operators
C provides all basic arithmetic operations:

| Operator | Expression | Meaning | Example |
|----------|-----------|---------|---------|
| `+` | `x + y` | addition | `printf("%d", x+y);` |
| `-` | `x - y` | subtraction | `printf("%d", x-y);` |
| `*` | `x * y` | multiplication | `printf("%d", x*y);` |
| `/` | `x / y` | division | `printf("%d", x/y);` |
| `%` | `x % y` | modulus (remainder) | `printf("%d", x%y);` |

**Integer arithmetic** — when both operands in an arithmetic expression are
integers, the expression is called an *integer expression* and the operation is
*integer arithmetic* (`/` truncates, `%` gives remainder):

for `a = 14, b = 4`:

```
a + b = 18     a - b = 10     a * b = 56
a / b = 3      (integer division - fraction dropped)
a % b = 2      (remainder)
```

**Real arithmetic** — when at least one operand is real (float/double), the
arithmetic is real: `14.0 / 4 = 3.5`.
`%` requires **integer** operands — `14.0 % 4` is invalid.

---

## 3. Relational Operators
Compare two values; the result is `1` (true) or `0` (false).

| Operator | Meaning | Example (a=10, b=20) |
|----------|---------|----------------------|
| `==` | equal to | `a == b` → 0 |
| `!=` | not equal to | `a != b` → 1 |
| `>` | greater than | `a > b` → 0 |
| `<` | less than | `a < b` → 1 |
| `>=` | greater than or equal | `a >= b` → 0 |
| `<=` | less than or equal | `a <= b` → 1 |

⚠ `==` compares; `=` assigns. Writing `if (a = b)` is a classic bug.

---

## 4. Logical Operators

| Operator | Meaning | Rule |
|----------|---------|------|
| `&&` | logical AND | true only if **both** conditions are true |
| `\|\|` | logical OR | true if **at least one** condition is true |
| `!` | logical NOT | inverts the condition |

Truth table (1 = true, 0 = false):

| a | b | a && b | a \|\| b | !a |
|---|---|--------|----------|----|
| 0 | 0 | 0 | 0 | 1 |
| 0 | 1 | 0 | 1 | 1 |
| 1 | 0 | 0 | 1 | 0 |
| 1 | 1 | 1 | 1 | 0 |

**Short-circuit evaluation:** in `x && y`, if `x` is false, `y` is never
evaluated; in `x || y`, if `x` is true, `y` is never evaluated.

---

## 5. Assignment Operators

| Operator | Example | Same as |
|----------|---------|---------|
| `=` | `a = 10` | store 10 in a |
| `+=` | `a += 5` | `a = a + 5` |
| `-=` | `a -= 3` | `a = a - 3` |
| `*=` | `a *= 2` | `a = a * 2` |
| `/=` | `a /= 4` | `a = a / 4` |
| `%=` | `a %= 3` | `a = a % 3` |

Multiple (chained) assignment works **right to left**: `a = b = c = 10;`

---

## 6. Increment / Decrement Operators (unary)
`++` adds 1, `--` subtracts 1 — the **position** decides *when*:

| Form | Name | Effect |
|------|------|--------|
| `++x` | pre-increment | x becomes x+1 **first**, then x is used |
| `x++` | post-increment | x is used **first**, then x becomes x+1 |
| `--x` | pre-decrement | x becomes x−1 first, then used |
| `x--` | post-decrement | x is used first, then x−1 |

Traces (a favourite exam question), starting `a = 5`:

```c
b = a++;   /* b = 5, a = 6 */
b = ++a;   /* b = 6, a = 6 */
b = a--;   /* b = 5, a = 4 */
b = --a;   /* b = 4, a = 4 */
```

---

## 7. Conditional (Ternary) Operator

```c
condition ? value_if_true : value_if_false;
```

```c
max = (a > b) ? a : b;          /* largest of two          */
printf("%d is %s", n, (n%2==0) ? "even" : "odd");
big = (x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z);
```

---

## 8. Bitwise Operators
Operate on the **binary bits** of integers.

| Operator | Name | Rule (per bit) |
|----------|------|----------------|
| `&` | AND | 1 only if **both** bits are 1 |
| `\|` | OR | 1 if **any** bit is 1 |
| `^` | XOR | 1 if bits are **different** |
| `~` | NOT | flips every bit |
| `<<` | left shift | `a << n` = a × 2ⁿ |
| `>>` | right shift | `a >> n` = a ÷ 2ⁿ |

With `a = 12 (1100₂)` and `b = 10 (1010₂)`:

```
a & b  =  8 (1000)      a | b  = 14 (1110)
a ^ b  =  6 (0110)      ~a     = -13
a << 1 = 24 (11000)     a >> 1 =  6 (0110)
```

Handy tricks: `(n & 1)` tests odd/even · `n << 3` multiplies by 8.

---

## 9. Special Operators

| Operator | Purpose | Example |
|----------|---------|---------|
| `sizeof` | memory size of type/variable in bytes | `sizeof(int)` → 4 |
| `&` | address-of | `&age` gives the memory address |
| `*` | pointer dereference (later unit) | `*ptr` |
| `,` | comma — sequences expressions | `t = (a = 2, a + 3);` → t = 5 |
| `.` `->` | member operators (structs, later unit) | `s.roll`, `p->roll` |

---

## 10. Operator Precedence & Associativity
**Precedence** decides which operator applies first; **associativity** decides
the order among equal-precedence operators (arithmetic: left→right,
assignment: right→left).

| Priority | Operators | Associativity |
|----------|-----------|---------------|
| 1 | `() []` | left → right |
| 2 | `! ~ ++ -- (cast) sizeof & (unary)` | right → left |
| 3 | `* / %` | left → right |
| 4 | `+ -` | left → right |
| 5 | `<< >>` | left → right |
| 6 | `< <= > >=` | left → right |
| 7 | `== !=` | left → right |
| 8 | `&` | left → right |
| 9 | `^` | left → right |
| 10 | `\|` | left → right |
| 11 | `&&` | left → right |
| 12 | `\|\|` | left → right |
| 13 | `? :` | right → left |
| 14 | `= += -= *= /= %=` | right → left |
| 15 | `,` | left → right |

**Solved examples:**

| Expression | Value | Why |
|------------|-------|-----|
| `10 + 4 * 2` | 18 | `*` before `+` |
| `(10 + 4) * 2` | 28 | brackets first |
| `10 / 5 * 2` | 4 | equal level → left to right |
| `5 * 3 % 2` | 1 | `*` then `%` |
| `10 % 3 + 4 * 2` | 9 | `%`, `*` before `+` |
| `2 + 3 > 4 && 5 > 3` | 1 | arithmetic, then relational, then `&&` |
| `10 > 5 \|\| 3 > 7 && 1` | 1 | `&&` evaluated before `\|\|` |

---

## 11. Type Conversion in Expressions
1. **Implicit (automatic)** — lower type promoted to higher:
   `char → int → float → double`. So `9 / 5 = 1` (int) but `9.0 / 5 = 1.8`.
2. **Explicit (cast)** — `(float)9 / 5 = 1.8`; classic use
   `avg = (float)sum / count;`
3. **Assignment conversion** — float → int **truncates**: `int x = 99.99;` → 99.
