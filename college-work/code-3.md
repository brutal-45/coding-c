## Static storage class (The static modifier can be used with local or global variable)


```c
#include <stdio.h>
#include<conio.h>

void fun();

int main() {
    fun();
    fun();
    fun();
    return 0;
}

void fun() {
    int a = 1;          
    static int b = 1;   
    printf("%d%d", a, b);
    a++;
    b++;
}

```
