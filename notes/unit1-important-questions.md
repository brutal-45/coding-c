# Unit-I Important Questions — SPPU-Style Answer Guide

> From "FPL Important Question for Unit-I" (Fundamentals of Programming
> Languages). Each question shows the marks split and what to prepare.
> Full theory lives in [`unit-1-basics.md`](unit-1-basics.md); runnable code in
> [`../unit-1-basics/`](../unit-1-basics/).

**Answer-writing tips:**
- **3 marks** → definition + 2–3 correct points + a small example where apt.
- **4 marks** → definition + classification/rules + explanation + examples.
- Algorithm questions → numbered steps with Start/Stop and meaningful names.
- Flowchart questions → standard ANSI symbols, unambiguous flow direction.
- Comparison questions → use a small table.
- Scope: don't add Unit II–V material unless the question asks.

---

## Q1. Define an algorithm and write an algorithm for addition of two numbers. **[3 M]**

**Prepare:** definition · characteristics · steps · one numerical example.

**Answer outline:**
1. **Definition:** an algorithm is a step-by-step, finite procedure of clear
   instructions to solve a specific problem.
2. **Characteristics (any 2–3):** input, output, definiteness, finiteness,
   effectiveness.
3. **Algorithm:**
   - Step 1: Start
   - Step 2: Input two numbers a, b
   - Step 3: sum = a + b
   - Step 4: Print sum
   - Step 5: Stop

**Code:** [`../unit-1-basics/02_algorithm_addition.c`](../unit-1-basics/02_algorithm_addition.c)

---

## Q2. Explain brief history of 'C' programming. **[3 M]**

**Prepare:** origin at Bell Labs · Dennis Ritchie · relationship with earlier
languages · standardization · why C remains important for systems/embedded.

**Answer outline:**
1. Developed by **Dennis Ritchie** at **Bell Labs (AT&T), USA, in 1972**.
2. Language chain: **CPL (1963) → BCPL (1967, Martin Richards) → B (1970, Ken
   Thompson) → C (1972)** — C inherited features from both BCPL and B.
3. **1978** K&R book; **1989** ANSI standard (C89), **1990** ISO (C90); later
   C99 / C11 / C17.
4. C remains the backbone of operating systems, compilers, databases, device
   drivers, browsers, anti-virus, robotics/IoT and embedded systems.

---

## Q3. Define an identifier in C. Explain rules of naming an identifier. **[4 M]**

**Prepare:** definition · valid/invalid examples · rules · case-sensitivity.

**Answer outline:**
1. **Definition:** a user-defined name that identifies a variable, function,
   array, enum etc.
2. **Rules:** letters + digits + underscore only; first char letter or
   underscore (no digit); no spaces/special symbols; no keywords; case-sensitive.
3. **Examples:** valid — `Ram, Data123, _user1, Programmer_01, DiV_E_Students,
   Return`; invalid — `123, 07Thala, File name, Kiran@123, return`.
4. Distinguish from keyword (table helps).

**Code:** [`../unit-1-basics/05_identifier_rules.c`](../unit-1-basics/05_identifier_rules.c)

---

## Q4. Explain data types in C. **[4 M]**

**Prepare:** basic types int/char/float/double · derived, user-defined and void
categories · sizes/ranges.

**Answer outline:**
1. **Definition:** data type determines the *type* and *size* of data a
   variable holds and the operations allowed.
2. **Classification:** Basic/Primary (int, char, float, double, void),
   Derived (array, function, pointer, reference), User-defined (struct, union,
   enum, typedef).
3. **Modifiers:** short, long, signed, unsigned.
4. **Table with sizes + ranges + format specifiers** (see notes §7).
5. Range formula: signed `−2^(n−1) … 2^(n−1)−1`; unsigned `0 … 2^n−1`.

**Code:** [`../unit-1-basics/03_data_types_and_sizes.c`](../unit-1-basics/03_data_types_and_sizes.c)

---

## Q5. Draw a flowchart for division of two numbers. **[3 M]**

**Prepare:** definition · standard symbols (Start/Stop, Input/Output, Process,
Decision, arrows) · draw neatly and label the flow.

**Answer outline:**
1. One-line definition of a flowchart.
2. Symbols table (5 rows) — name it: ANSI standard.
3. The chart: Start → Input a,b → Diamond `b == 0?` → Yes: print "Division not
   possible" → Stop; No: `q = a/b` → Print q → Stop.

ASCII version: [`../unit-1-basics/11_division_with_check.c`](../unit-1-basics/11_division_with_check.c)

---

## Q6. Explain tokens in C programming. **[3 M]**

**Prepare:** keywords, identifiers, constants, operators, special
symbols/punctuators — with examples.

**Answer outline:**
1. **Definition:** smallest individual element of a program meaningful to the
   compiler.
2. **Six types + one example each:** keyword (`int`), identifier (`sum`),
   constant (`10`), string (`"hi"`), operator (`+`), punctuator (`;`).
3. Worked example: `int sum = a + b * 10 ;` → **9 tokens** — list all.

**Code:** [`../unit-1-basics/04_tokens_demo.c`](../unit-1-basics/04_tokens_demo.c)

---

## Q7. Explain different storage classes in C. **[4 M]**

**Prepare:** auto, register, static, extern — scope, lifetime, typical use.

**Answer outline:**
1. **Definition:** storage class tells the storage area, default value, scope
   and lifetime of a variable.
2. **Each class, 4 features each** (storage / default value / scope / lifetime)
   — see the comparison table in notes §8.
3. Memory layers: code, data segment (global/static), stack (auto), heap
   (dynamic).
4. Typical use: `register` → loop counters; `static` → counters persisting
   across calls; `extern` → shared across files; `auto` → default locals.

**Code:** [`../unit-1-basics/09_storage_classes.c`](../unit-1-basics/09_storage_classes.c)

---

## Q8. Define a constant in C. What are the different types of constants in C? **[4 M]**

**Prepare:** meaning of constant · integer, floating, character and string
constants · symbolic constants · constant vs variable.

**Answer outline:**
1. **Definition:** a fixed value that does not change during program execution.
2. **Types:** integer (decimal `82`, octal `0343`, hexadecimal `0xABC`);
   real/floating — fractional (`7.5`) and exponential (`1.2e-4`); character
   (`'A'`, stored as ASCII 65); string (`"Hello"`); backslash/escape constants
   (`\n, \t, \\`); symbolic constants (`#define PI 3.14159`).
3. Rules for each (no commas/blanks; octal starts with 0; hex starts with 0x…;
   exponent is always an integer).
4. Constant vs variable (one sentence + table `#define` vs `const` helps).

**Code:** [`../unit-1-basics/06_constants_demo.c`](../unit-1-basics/06_constants_demo.c)
