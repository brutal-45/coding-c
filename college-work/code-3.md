## Static storage class (The static modifier can be used with local or global variable)

**Fixed version** (`conio.h` is Turbo-C-only and non-standard; output now
readable, with the expected result written out):

```c
#include <stdio.h>

void fun(void);

int main(void) {
    fun();
    fun();
    fun();
    return 0;
}

void fun(void) {
    int a = 1;           /* re-initialised on EVERY call          */
    static int b = 1;    /* initialised ONCE, then retained       */
    printf("%d %d\n", a, b);
    a++;
    b++;
}
```

**Expected output:**

```
1 1
1 2
1 3
```

Why: `a` is a normal (auto) local — it is created and set to 1 on every call,
so it always prints 1. `b` is `static` — it is created and set to 1 only the
first time, and its value survives between calls, so it prints 1, 2, 3.

**Bugs that were in the original:**
1. `#include <conio.h>` — not part of standard C; gcc refuses it. Removed.
2. `printf("%d%d", a, b);` without `\n` — the three calls printed `111213`
   glued together; now each pair is on its own line.
3. Missing explanation of what the program demonstrates (added above).

> Full storage-class demo (auto/register/static/extern):
> [`../unit-1-basics/09_storage_classes.c`](../unit-1-basics/09_storage_classes.c)
