## Explanation of algorithm :-


In C programming, an algorithm is a step-by-step, finite sequence of logical instructions written to solve a specific problem. It serves as the abstract conceptual blueprint or plan of a program before you actually write any actual C code. 
While an algorithm itself is completely language-independent (usually written in plain English or pseudocode), in the context of C, it represents the foundational logical steps that you will directly translate into variables, loops, and conditional statements inside your functions. 

Core Characteristics of a C Algorithm

For an algorithm to be effectively implemented in C, it must follow five key principles: 
• Input: It must accept zero or more well-defined quantities from the user (such as variables passed into a C function).
• Output: It must produce at least one output or result (like a return value or a printf statement).
• Definiteness: Every step must be clear and unambiguous. In C, this means avoiding logical vagueness so the code compiles and runs exactly as intended.
• Finiteness: The logic must terminate after a countable number of steps. An algorithm must never fall into an unintended infinite loop.
• Effectiveness: Each instruction must be simple enough to be executed manually with paper and pencil in a finite amount of time.

Conceptual Difference: Algorithm vs. Program

A common point of confusion is mixing up the abstract logic with the language syntax.

Metric	Algorithm	C Program
Definition	The logical design or step-by-step strategy to solve a problem.	The concrete implementation of that logic using syntax.
Language	Plain English, mathematical notations, or Pseudocode.	Strict C programming language syntax (#include, int main(), etc.).
Execution	Followed and analyzed by humans on paper.	Compiled by a C compiler into an executable run by a computer.


Example: Adding Two Numbers


1. The Algorithm (Language-Independent)

An algorithm to add two numbers is structured logically like this:
Step 1: Start
Step 2: Declare variables num1, num2, and sum
Step 3: Read the values of num1 and num2
Step 4: Add num1 and num2 and assign the result to sum
Step 5: Display sum
Step 6: Stop 

2. The Implementation (C Program)

This is how that exact logical algorithm translates directly into C code:
```c
#include <stdio.h>

int main() {
    // Step 2: Declare variables
    int num1, num2, sum; 
    
    // Step 3: Read values
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2); 
    
    // Step 4: Add numbers and assign to sum
    sum = num1 + num2; 
    
    // Step 5: Display sum
    printf("Sum = %d\n", sum); 
    
    // Step 6: Stop
    return 0; 
}

```
Use code with caution.
