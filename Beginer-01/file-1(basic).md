## Data type :- size and format specifier

| Data type | Memory size (Bytes) | Format Specifier | Example |
|-----------|---------------------|------------------|---------|
| int | 4 | %d | 1, 5, 50 etc. |
| char | 1 | %c | 'A', 'B', 'C' |
| float | 4 | %f | 20.5, 60.0, 85.36 |
| double | 8 | %lf | 202010101.25 |

**Fixed version of the starter program** (bugs corrected — see the comments):

```c
#include <stdio.h>

int main() {
    int rollno;
    float percen;
    double count;

    printf("Enter your rollno: ");
    scanf("%d", &rollno);            /* & glued to the variable */

    printf("Enter your percentage: ");
    scanf("%f", &percen);

    printf("Enter your counter: ");
    scanf("%lf", &count);

    printf("The data entered by user is as follow:\n");
    printf("=============\n");
    printf("Your rollno is %d\n", rollno);        /* variable goes
                                                     AFTER the format
                                                     string!          */
    printf("Your percentage is %f\n", percen);
    printf("Your counter is %lf\n", count);       /* %lf for double  */
    return 0;
}
```

**Bugs that were in the original:**
1. `# #include <stdio.h>` → stray `#` before the directive.
2. `scanf("%d",& rollno)` → space between `&` and the variable.
3. `printf("Your rollno is %d, rollno");` → the variable was typed inside the
   quoted string, so nothing was printed. Correct: `printf("...%d\n", rollno);`
4. Missing `\n` and the `=============` line was printed on the same line.

> Same program, runnable and explained: [`../unit-1-basics/10_formatted_io.c`](../unit-1-basics/10_formatted_io.c)
