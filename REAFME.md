<div align="center">

# 🖥️ coding-c

**Fundamentals of Programming Languages (C) — programs, notes & exam material**

*Unit-wise C programs for SPPU First-Year FPL, written to compile clean with
`gcc -Wall -Wextra` and mapped to the important questions.*

![CI](https://github.com/brutal-45/coding-c/actions/workflows/ci.yml/badge.svg)
![Language](https://img.shields.io/badge/language-C-blue.svg)
![Standard](https://img.shields.io/badge/std-c99-green.svg)
![License](https://img.shields.io/badge/license-MIT-yellow.svg)

</div>

---

## 📌 What is this repo?

A complete, exam-ready companion for **Fundamentals of Programming Languages**
(Units I–III):

- 🧾 **35 runnable C programs** — one per topic, each with an exam-style header
  (concept, algorithm where relevant, expected output) and safe, checked input.
- 📚 **Notes & data** — unit-wise theory distilled from the class notes, the
  Unit-I important-question answer guide, a practice question bank and a
  one-page cheat sheet.
- 🛠️ **Build system** — one command compiles & smoke-tests everything
  (`make`), with a GitHub Actions badge that proves every program builds.

> 🏷️ Programs marked **⭐** correspond directly to the Unit-I important
> questions (SPPU-style).

## 🗂️ Repository structure

```
coding-c/
├── unit-1-basics/            # Unit I  — program planning & C basics
├── unit-2-operators/         # Unit II — operators & expressions
├── unit-3-control-flow/      # Unit III— branching & looping
├── notes/                    # 📚 notes, question bank, cheat sheet
├── Beginer-01/               # starter docs (fixed & kept)
├── college-work/             # starter docs (fixed & kept)
├── scripts/                  # build-all.sh / smoke-test.sh / build-all.bat
├── Makefile                  # make build | test | list | clean
└── .github/workflows/        # CI (compile+smoke) + timestamp updater
```

## 🚀 How to run

**One program**

```bash
gcc -Wall unit-1-basics/02_algorithm_addition.c -o add
./add
```

**Everything at once**

```bash
make build    # compile all 35 programs into bin/
make test     # smoke-run every binary (5 s timeout, safe piped input)
make list     # list all programs
make clean    # remove bin/
```

No `make`? → `bash scripts/build-all.sh` · Windows? → `scripts\build-all.bat`
(MinGW gcc). Online? → paste any program into
[OnlineGDB](https://www.onlinegdb.com/online_c_compiler) or
[Programiz](https://www.programiz.com/c-programming/online-compiler/).

## 📖 Programs — Unit 1 · Basics & Program Planning

| # | Program | Topic |
|---|---------|-------|
| 01 | `01_hello_world.c` | first program + sections of a C program |
| 02 | `02_algorithm_addition.c` | ⭐ Q1 algorithm + addition of two numbers |
| 03 | `03_data_types_and_sizes.c` | ⭐ Q4 data types, modifiers, sizes, ranges |
| 04 | `04_tokens_demo.c` | ⭐ Q6 tokens — the 9-token statement |
| 05 | `05_identifier_rules.c` | ⭐ Q3 identifier rules, valid/invalid test |
| 06 | `06_constants_demo.c` | ⭐ Q8 integer/real/char/string/escape constants |
| 07 | `07_symbolic_constants.c` | `#define`, rules, symbolic constants |
| 08 | `08_const_and_volatile.c` | `const` variables & `volatile` |
| 09 | `09_storage_classes.c` | ⭐ Q7 auto · register · static · extern |
| 10 | `10_formatted_io.c` | printf/scanf with all format specifiers |
| 11 | `11_division_with_check.c` | ⭐ Q5 division flowchart, made into code |

## 📖 Programs — Unit 2 · Operators & Expressions

| # | Program | Topic |
|---|---------|-------|
| 01 | `01_arithmetic_operators.c` | `+ - * / %`, integer vs real division |
| 02 | `02_relational_operators.c` | `== != > < >= <=` (1/0 results) |
| 03 | `03_logical_operators.c` | `&& \|\| !` + truth table |
| 04 | `04_assignment_operators.c` | `= += -= *= /= %=` traced |
| 05 | `05_increment_decrement.c` | pre/post `++ --` classic traces |
| 06 | `06_ternary_operator.c` | `? :` — largest of two/three |
| 07 | `07_bitwise_operators.c` | `& \| ^ ~ << >>` with binary display |
| 08 | `08_special_operators.c` | `sizeof`, `&`, comma operator |
| 09 | `09_precedence_associativity.c` | precedence table + solved expressions |
| 10 | `10_type_conversion.c` | implicit/explicit casting, averages |

## 📖 Programs — Unit 3 · Control Flow

| # | Program | Topic |
|---|---------|-------|
| 01 | `01_simple_if.c` | simple if (pass check) |
| 02 | `02_if_else.c` | if-else (larger of two) |
| 03 | `03_else_if_ladder.c` | grade classifier (SPPU classes) |
| 04 | `04_nested_if.c` | nested if (scholarship eligibility) |
| 05 | `05_switch_calculator.c` | ⭐ simple calculator (switch) |
| 06 | `06_switch_days.c` | switch on int + char, case grouping |
| 07 | `07_goto_demo.c` | goto + label (and why to avoid it) |
| 08 | `08_while_loop.c` | sum of N + multiplication table |
| 09 | `09_do_while_menu.c` | menu program (do-while) |
| 10 | `10_for_loop.c` | factorial, evens, countdown |
| 11 | `11_nested_loop_patterns.c` | star & number patterns |
| 12 | `12_break_continue.c` | break vs continue |
| 13 | `13_prime_check.c` | branching + loop + break |
| 14 | `14_calendar_generator.c` | ⭐ month calendar (class-notes program) |

## 📚 Notes & data (`notes/`)

| File | Contents |
|------|----------|
| `unit-1-basics.md` | full Unit-I theory — algorithms, flowcharts, tokens, keywords, constants, variables, data types, storage classes, `#define`/`const`/`volatile` |
| `unit-2-operators.md` | all 8 operator families, precedence table, type conversion, solved expressions |
| `unit-3-control-flow.md` | branching (if/switch/goto), looping (while/do-while/for), break/continue |
| `unit1-important-questions.md` | the 8 PYQs with SPPU answer outlines + marks split |
| `practice-questions.md` | 32 extra practice questions with hints |
| `cheat-sheet.md` | one-page rapid revision card |

## 🧭 Suggested learning path

```
Unit 1  programs 01 → 11   (basics: what a program IS)
   ↓
Unit 2  programs 01 → 10   (operators: how to COMPUTE)
   ↓
Unit 3  programs 01 → 14   (control flow: how to DECIDE & REPEAT)
   ↓
notes/practice-questions.md + notes/unit1-important-questions.md (exam prep)
```

Read every program top-to-bottom — the header comment block contains the
concept, the algorithm and the **expected output**, so you can predict before
you run.

## 🎯 Exam corner (SPPU FPL)

- 3-mark answer = definition + 2–3 points + small example.
- 4-mark answer = definition + classification/rules + explanation + examples.
- Always draw flowcharts with ANSI symbols; algorithms in numbered steps.
- Comparison questions earn easy marks — answer with a table.
- Start at [`notes/unit1-important-questions.md`](notes/unit1-important-questions.md).

## 🤝 Contributing

Found a bug, or want to add Unit IV–V material? PRs are welcome — keep the
style: one topic per `.c` file, exam-style header comment, clean
`gcc -Wall -Wextra` output.

## 📜 Credits & license

Theory notes are based on the FPL class notes of
**TSSM's Padmabhooshan Vasantdada Patil Institute of Technology, Pune**
(Prof. Tushar Bora). Code in this repo is released under the repo's
[MIT license](LICENSE).

> ℹ️ The CI badge above points to `brutal-45/coding-c` — if you fork or rename
> the repository, update the badge URL in this README.