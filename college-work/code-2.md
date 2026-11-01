## C Program to check size of variables

**Fixed version** (the original printed mismatched labels and used the wrong
specifier for `sizeof`):

```c
#include <stdio.h>

int main()
{
  int rollno = 1;
  char grade = 'A';
  float percen = 80.50;
  double count = 202012101;

  printf("size of rollno (int)    = %zu bytes\n", sizeof(rollno));
  printf("size of grade (char)    = %zu bytes\n", sizeof(grade));
  printf("size of percen (float)  = %zu bytes\n", sizeof(percen));
  printf("size of count (double)  = %zu bytes\n", sizeof(count));
  return 0;
}
```

**Bugs that were in the original:**
1. Labels and variables did not match — `printf("size of grade=...", sizeof(rollno))`
   printed the size of `rollno` under the label "grade".
2. `sizeof` yields the type `size_t`; the correct specifier is `%zu`
   (`%d` happens to work on many compilers but is not guaranteed).
3. `percen` and `count` were declared with the values `80.50` and `202012101`
   — fine — but `sizeof` needs no values at all; it works on the type.
4. Only 3 of the 4 variables were measured; `count` was skipped and mislabeled.

**Typical output (64-bit gcc):**

```
size of rollno (int)    = 4 bytes
size of grade (char)    = 1 bytes
size of percen (float)  = 4 bytes
size of count (double)  = 8 bytes
```

> Full sizes/ranges table: [`../unit-1-basics/03_data_types_and_sizes.c`](../unit-1-basics/03_data_types_and_sizes.c)
