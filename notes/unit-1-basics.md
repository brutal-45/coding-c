# Unit 1 — Introduction to Program Planning & C Programming

> Notes compiled from the class notes (TSSM's PVPIT, Pune — Prof. Tushar Bora)
> and the Unit-I important-question bank. Marks tags like **[3 M]** / **[4 M]**
> refer to SPPU-style question weightage.

---

## 1. Program Design Tools

### 1.1 Algorithm **[3 M]**
An **algorithm** is a step-by-step procedure / finite set of clear rules that must
be followed to solve a particular problem. It is the foundation for writing a
program — software engineers first plan the solution as an algorithm, then
translate it into C.

**Characteristics (write all 5 for full marks):**

| # | Property | Meaning |
|---|----------|---------|
| 1 | **Input** | takes zero or more inputs |
| 2 | **Output** | produces at least one output |
| 3 | **Definiteness** | every step is clearly and unambiguously defined |
| 4 | **Finiteness** | terminates after a finite number of steps |
| 5 | **Effectiveness** | each step can be carried out in finite time |

**Use areas:** data science, AI, computer science, game development, operations
research, cryptography, automation.

**Example — sum of two integers [3 M]:**
1. Start
2. Input two numbers `a` and `b`
3. Add and store result in `sum` (`sum = a + b`)
4. Print `sum`
5. End

**Example — largest of two numbers:**
1. Start
2. Input `a`, `b`
3. If `a > b` print "a is larger"
4. Else print "b is larger"
5. If `a = b` print "both numbers are equal"
6. End

### 1.2 Flowchart **[3 M]**
A **flowchart** is a pictorial (graphical) representation of an algorithm. Boxes
of different shapes denote different operations; arrows denote the direction of
flow. We draw flowcharts to *visually plan the logic before coding it in C*.

**Characteristics:**
- Symbols are standardised by **ANSI**.
- Helps divide a large complex problem into small manageable ones.
- Generally the algorithm is first drawn as a flowchart, then expressed in a
  programming language.
- Sequence, selection and iterative structures may be used as required.

**Standard symbols:**

| Symbol | Shape | Used for |
|--------|-------|----------|
| Start / Stop | Oval (terminator) | beginning / end of the flowchart |
| Input / Output | Parallelogram | reading or displaying data |
| Process | Rectangle | computation, e.g. `S = A + B` |
| Decision | Diamond | condition, with Yes/No branches |
| Flow lines | Arrows | direction of flow |
| Connector | Circle | joining two parts of a chart |

**Flowchart — sum of two integers:**

```
        ( Start )
            |
      /===========\        <- parallelogram: Input A, B
      \===========/
            |
      [ S = A + B ]          <- rectangle: process
            |
      /===========\          <- parallelogram: Print S
      \===========/
            |
        ( Stop )
```

**Flowchart — division of two numbers (with zero-check):**

```
        ( Start )
            |
      /===========\     Input a, b
      \===========/
            |
        /-------\
       < b == 0 ? >---Yes---> Print "Division not possible" ---> ( Stop )
        \-------/
            | No
      [  q = a / b  ]
            |
      /===========\     Print q
      \===========/
            |
        ( Stop )
```

### 1.3 High-level vs Low-level language

| # | High-level language | Low-level language |
|---|---------------------|--------------------|
| 1 | programmer friendly | machine friendly |
| 2 | less memory efficient | high memory efficient |
| 3 | easy to understand | tough to understand |
| 4 | simple to maintain | complex to maintain |
| 5 | portable | non-portable (machine dependent) |
| 6 | runs on any platform | machine dependent |
| 7 | widely used today | rarely used today |

---

## 2. Overview of C

**What is C?** A general-purpose, **procedural, high-level** programming language
used for system programming, software development, games and more.

### 2.1 History of C **[3 M]**
Write the chain + the key facts:

```
CPL  ->  BCPL  ->  B  ->  C
(1963)   (1967)  (1970)  (1972)
Martin    Ken     Ken    Dennis
Richards  Thompson Thompson Ritchie
```

- Developed by **Dennis Ritchie** at **Bell Laboratories (AT&T), USA in 1972**.
- Evolved from BCPL (Basic Combined Programming Language, Martin Richards) and
  B (Ken Thompson); C "inherited" features from both.
- **1978** — Brian Kernighan & Dennis Ritchie published *The C Programming
  Language* (K&R C).
- **1989** — American National Standards Institute (ANSI) standardised C
  (ANSI C / C89); **1990** — ISO approved it (C90). Later standards: C99, C11, C17.
- Why C still matters after 50 years: operating systems, compilers, database
  systems, text editors, device drivers, web browsers, anti-virus, robotics/IoT
  and embedded systems are written in C.

### 2.2 Importance of C
High-level & compact, core language, portable, rich built-in functions,
structured language, pointers, extensible, dynamic memory allocation.

### 2.3 Sections of a C Program

```
Documentation section   (comments: name, author, date)
Link section            (#include <stdio.h>)
Definition section      (#define PI 3.14159)
Global declaration section  (variables/functions usable everywhere)
main() function section {
    declaration part
    executable part
}
Sub-program section     (user-defined functions)
```

---

## 3. Character Set
The set of valid characters usable in a C program (letters, digits, special
symbols, white spaces) — the "alphabet" from which words, sentences and
paragraphs (instructions) are formed.

| ASCII | Characters |
|-------|------------|
| 0 | Null character |
| 32 | Blank space |
| 48–57 | digits 0–9 ('0' = 48) |
| 65–90 | A–Z ('A' = 65) |
| 97–122 | a–z ('a' = 97) |

---

## 4. C Tokens **[3 M]**
A **token** is the smallest individual element of a C program that is
meaningful to the compiler.

Types: **keyword, identifier, constant, string, operator, punctuator/special symbol**.

Breaking `int sum = a + b * 10 ;` into tokens — **9 tokens**:
`int`(keyword) `sum`(identifier) `=`(assignment op) `a`(identifier)
`+`(arithmetic op) `b`(identifier) `*`(arithmetic op) `10`(constant) `;`(punctuator).

### 4.1 Keywords
Words with **special meaning to the compiler** — **32 keywords** in ANSI C,
always written in **lowercase**.

```
auto      break     case      char      const     continue
default   do        double    else      enum      extern
float     for       goto      if        int       long
register  return    short     signed    sizeof    static
struct    switch    typedef   union     unsigned  void
volatile  while
```

Examples: `int` declares an integer variable; `return` exits a function
(optionally returning a value); `break` exits a loop/switch; `goto` transfers
control to a labelled statement.

### 4.2 Identifiers **[4 M]**
An **identifier** is a user-defined name used to identify variables, functions,
arrays, enums etc. (e.g. `j, count, temp1, top_of_page, skip12, LastNum, score`).

**Rules for naming identifiers:**
1. Letters a–z / A–Z allowed.
2. Digits 0–9 allowed.
3. No special characters **except** underscore `_`.
4. Must begin with a letter or `_` — **never a digit**.
5. **No spaces** allowed.
6. Cannot use a **keyword** as an identifier.
7. C is **case-sensitive**: `int` and `Int` are different identifiers.

**Class test (valid or invalid?):**

| Name | Verdict | Reason |
|------|---------|--------|
| Ram | ✔ valid | |
| SACHIN | ✔ valid | |
| 123 | ✘ invalid | starts with a digit |
| Data123 | ✔ valid | |
| Programmer_01 | ✔ valid | |
| 07Thala | ✘ invalid | starts with a digit |
| _user1 | ✔ valid | may start with underscore |
| File name | ✘ invalid | contains a space |
| DiV_E_Students | ✔ valid | |
| Kiran@123 | ✘ invalid | `@` not allowed |
| Return | ✔ valid | `Return` ≠ keyword `return` (case-sensitivity) |
| return | ✘ invalid | keyword |

**Identifier vs Keyword:**

| # | Identifier | Keyword |
|---|------------|---------|
| 1 | user-defined name for variables/functions/structs | reserved word with predefined meaning |
| 2 | first char can be letter or underscore | always lowercase |
| 3 | may contain letters, digits, underscore | only alphabetical characters |
| 4 | e.g. `test, count1` | e.g. `int, auto, break` |

---

## 5. Constants **[4 M]**
A **constant** is a value that remains **fixed** during program execution.

| Type | Examples |
|------|----------|
| Integer constant | `5, -10` |
| Real constant | `7.5, -10.11` |
| Character constant | `'A', '$'` |
| String constant | `"Hello"` |

### 5.1 Integer constants
Whole numbers without a decimal point. Rules:
- at least one digit, no decimal point (e.g. `10, -55`)
- **no commas or blanks** inside (`7,000` / `100 11` invalid)
- can be positive or negative; by default positive

| Sub-type | Base | Digits | Example |
|----------|------|--------|---------|
| Decimal | 10 | 0–9 | `82, -297` |
| Octal | 8 | 0–7, **starts with 0** | `0343, 0123` valid; `078, 347` invalid |
| Hexadecimal | 16 | 0–9 + A(a)–F(f), **starts with 0x/0X** | `0X555, 0xABC` valid; `959X, 0712x` invalid |

### 5.2 Real (floating-point) constants
Contains a decimal point and/or an exponent.

- **Fractional form** — `whole.fraction`, e.g. `7.4`
  - at least one digit, only **one** decimal point (`10.9.99` invalid)
  - no commas or blanks
- **Exponential form** — `mantissa E exponent`, e.g. `1.2e-4 = 0.00012`
  - mantissa: integer or real constant; exponent: **always integer**
  - used for very small / very large numbers (`100000 = 1E5`, `0.0000002 = 2e-7`)

### 5.3 Character constants
A single character enclosed in **single quotes**. Stored as its ASCII value.

| Char constant | ASCII | Memory |
|---------------|-------|--------|
| 'A' | 65 | 65 |
| 'Z' | 90 | 90 |
| '1' | 49 | 49 |
| ' ' (space) | 32 | 32 |
| '9' | 57 | 57 |

### 5.4 String constants
Characters enclosed in **double quotes** — `"Hello"`, `"123"`, may include
letters, digits, special symbols and blanks.

### 5.5 Backslash (escape sequence) constants

| Escape | Meaning | Escape | Meaning |
|--------|---------|--------|---------|
| `\b` | backspace | `\'` | single quote |
| `\n` | new line | `\"` | double quote |
| `\f` | form feed | `\v` | vertical tab |
| `\t` | horizontal tab | `\\` | backslash |
| `\r` | carriage return | `\?` | question mark |
| `\a` | alert (bell) | | |

---

## 6. Variables
A **variable** is a name given to a memory location that can store and manage
data during execution (e.g. `a = 5, b = 7.18`).

**Why names instead of addresses?** An address like `0x5723FFAC` is hard to
remember — the OS/compiler maintains a **symbol table** mapping names to addresses:

| Variable name | Actual memory |
|---------------|---------------|
| a | 0x5723FFAC |
| b | 0x23789A5B |
| c | 0x343778BB |

A variable can hold **different values at different times** during execution.

**Rules for naming variables:** same as identifier rules; advisable length
1–32, ideally ≤ 8. Valid: `Abc, Sum123, Ravi_123, _Programmer`. Invalid:
`Sum 123, Ravi@123, User,123, float, 1am, %d`.

---

## 7. Data Types **[4 M]**
A data type defines the **type** and **size** of data a variable will hold and
the **operations allowed** on it (e.g. `%` and bitwise operators apply only to
integers). Example: `int age = 15;` → integer value, 4 bytes.

**Classification:**

```
                    Data Types
        ┌───────────────┼────────────────┐
   Basic/Primary     Derived         User-defined
   int, char,     array, function,   struct, union,
   float, double, pointer,           enum, typedef
   void, bool     reference
```

**Modifiers:** `short`, `long`, `signed` (both +ve/−ve), `unsigned` (only +ve) —
they increase/decrease the size of a basic type.

**Range formula** (n = number of bits):
- signed: `−2^(n−1)` to `+2^(n−1) − 1` → int (32 bits): −2147483648…2147483647
- unsigned: `0` to `2^n − 1`

**Memory units:** bit < nibble (4 bits) < byte (8 bits) < KB (1024 B) < MB < GB < TB < PB.

**Master table (memorise for exams):**

| Data type | Modifier | Syntax | Memory | Range | Format |
|-----------|----------|--------|--------|-------|--------|
| short int | signed | `short int` | 2 B | −32768…32767 | `%hd` |
| int | signed | `int` | 4 B | −2147483648…2147483647 | `%d` |
| long int | signed | `long int` | 4 B | same as int | `%ld` |
| long long | signed | `long long int` | 8 B | ±2^63 | `%lld` |
| short | unsigned | `unsigned short int` | 2 B | 0…65535 | `%hu` |
| int | unsigned | `unsigned int` | 4 B | 0…4294967295 | `%u` |
| long | unsigned | `unsigned long int` | 4 B | 0…4294967295 | `%lu` |
| char | signed | `char` | 1 B | −128…127 | `%c` |
| char | unsigned | `unsigned char` | 1 B | 0…255 | `%c` |
| float | — | `float` | 4 B | 3.4E−38…3.4E+38 | `%f` |
| double | — | `double` | 8 B | 1.7E−308…1.7E+308 | `%lf` |
| long double | — | `long double` | 10 B | 3.4E−4932…3.4E+4932 | `%Lf` |

**void** — empty type, no return value; used in functions & pointers;
generic (can represent any standard type).

**Derived** — arrays, functions, pointers, references (built from basic types).
**User-defined** — structure, union, typedef, enum (user defines size/structure).

---

## 8. Storage Classes **[4 M]**
A variable is fully defined by its **data type + storage class**. The storage
class tells us:

1. **Storage** — where in memory (stack, register, data segment)
2. **Default value** — garbage or zero
3. **Scope** — where the variable is visible
4. **Lifetime** — how long it exists

**Memory layers:** Code/Text (whole program) · Data segment (global/static) ·
Stack (local/auto) · Heap (dynamic memory).

### The four storage classes

**1. `auto`** — default for local variables (not allowed for globals).
Storage: stack · Default: garbage · Scope: local to block · Lifetime: while
control stays in the block.

**2. `extern`** — declares a global variable/function usable across files.
Storage: data segment · Default: 0 · Scope: global · Lifetime: whole program.

**3. `static`** — limits scope and *retains value between calls*.
Storage: data segment · Default: 0 · Scope: local static → block; global static
→ file · Lifetime: entire program.

**4. `register`** — suggests storing in a CPU register for fast access (loop
counters). Not for globals; **`&` (address-of) is not allowed**.
Storage: register · Default: garbage · Scope: block · Lifetime: block.

**Comparison table:**

| Feature | auto | register | static | extern |
|---------|------|----------|--------|--------|
| Storage | stack | CPU register | data segment | data segment |
| Default value | garbage | garbage | 0 | 0 |
| Scope | block | block | block/file | global |
| Lifetime | block | block | whole program | whole program |
| Keyword needed? | optional (default) | optional hint | required for persistence | required across files |

---

## 9. Declaration & Assignment

### 9.1 Declaration of variables
Tells the compiler the **name** and the **type** of data the variable holds.
`Data_type variable_name;` → `int age;` `float salary;` `char grade;`

**Types of variables:**

| Type | Declared | Accessible |
|------|----------|------------|
| Local | inside a function/block | only that block |
| Global | outside all functions (above main) | all functions |
| Static | with `static` keyword | value persists between calls |
| Extern | in one file, used in another | multi-file projects |

### 9.2 Declaration with initialisation
`int age = 10;` · `float salary = 50000.50;` · `char grade = 'A';`
Multiple: `int x, y, z;` · `float a = 1.2, b = 4.1, c = 7.4;`
Use **meaningful names**: `totalAmount, studentCount` (good) vs `tmp, x` (bad).

### 9.3 Assigning values
`variable_name = value;` Three ways:
1. **At declaration** — `int age = 10;`
2. **After declaration** — `int age; age = 10;`
3. **Multiple assignment** — `a = b = c = 10;`

---

## 10. Defining Symbolic Constants
Repeated constants (PI = 3.14, class strength = 50, pass marks = 40) create two
problems: **modification** (changing 3.14 → 3.14159 in 30 places) and
**understanding** (what does 40 mean?).

**Solution — `#define`** in the definition section:

```c
#define PI          3.14159
#define TOTAL_CLASS 50
#define PASS_MARKS  40
```

`(preprocessor directive) (symbolic constant) (value)` — before compilation the
preprocessor **textually replaces** every occurrence of the name by its value.

**Rules:**
1. No blank space between `#` and `define`
2. Blank space required between `#define` and the name
3. Name conventionally UPPERCASE (readability, not a rule)
4. **No semicolon** at the end
5. The name cannot be re-assigned another value in the program

## 11. Declaring a Variable as Constant (`const`)
`const int Max_Value = 100;` — the value **cannot be changed** after the initial
assignment; must be initialised **at declaration**; any attempt to modify it
gives a **compile-time error**. Improves reliability by preventing accidental
modification. Also used with pointers, arrays, function parameters.

## 12. `#define` vs `const`

| Feature | `#define` | `const` |
|---------|-----------|---------|
| Type | preprocessor directive | keyword in variable declaration |
| Memory allocation | none (text replacement) | allocates memory |
| Scope | global by default | follows variable's scope rules |
| Modifiability | cannot be changed once defined | cannot be modified after init |
| Memory usage | no (just text substitution) | uses memory |
| Debugging | harder (value substituted) | easier (treated as a variable) |
| Example | `#define MAX 100` | `const int max = 100;` |

## 13. Declaring a Variable as Volatile
`volatile int no_of_vehicles;` — tells the compiler the value may **change from
an external source** at any time (embedded systems, hardware registers,
Interrupt Service Routines). The compiler therefore **avoids caching/
optimising** reads of that variable, ensuring the program interacts correctly
with the hardware/RAM.
