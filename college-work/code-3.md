##Static storage class (The static modifier can be used with local or global variable)


```c
#include<stdio.h>
#include<canio.h>

void fun();
void main();

{
    fun();
    fun();
    fun();
    
    void fun()
    
    {
        
     int a=1;
     static int b=1;
     printf("%d%d", a,b);
     a++;
     b++;
    
    }

    
}
```
