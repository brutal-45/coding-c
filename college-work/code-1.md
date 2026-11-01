## We are using here int , float , char and double variables.

**Fixed version** (the original had 4 bugs — listed below the code):

```c
#include <stdio.h>

int main()
{
  int rollno;
  float percen;
  char grade;
  double count;

  printf("Enter your roll: ");
  scanf("%d", &rollno);

  printf("Enter your percentage: ");
  scanf("%f", &percen);

  printf("Enter your grade: ");        /* ':' not ';'           */
  scanf(" %c", &grade);                /* " %c" - the leading
                                          space skips the Enter
                                          left by the last scanf */

  printf("Enter your counter: ");
  scanf("%lf", &count);

  printf("The data entered by user is as follow:\n");
  printf("========================================\n");
  printf("Your Rollno is %d\n", rollno);
  printf("Your percentage is %f\n", percen);
  printf("Your grade is %c\n", grade);
  printf("Your counter is %lf\n", count);   /* %lf for double,
                                               NOT %ld          */
  return 0;
}
```

**Bugs that were in the original:**
1. `printf("Enter your grade;")` — a `;` where a `:` belonged (cosmetic, but the
   prompt looked wrong).
2. `scanf("%C", &grade)` — `%C` does not exist; it must be lowercase `%c`.
   Even then a plain `%c` would read the leftover Enter key, so write `" %c"`.
3. `printf("your counter is %ld", count)` — `%ld` is for `long int`; a `double`
   needs `%lf`.
4. All output `printf`s lacked `\n`, so everything ran together on one line.

> Same program, runnable and explained: [`../unit-1-basics/10_formatted_io.c`](../unit-1-basics/10_formatted_io.c)
