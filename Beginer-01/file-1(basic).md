## Data type :- size and format specifier


| Data type | Memomry size (Bytes) | Format Specifier | Example |
|-----------|----------------------|------------------|---------|
| int | 4 | %d | 1,5,50| e.t.c | 
|char | 1 | %c | 'A','B','C' |
|float | 4 | %f | 20,50,60,85.36 |
|double| 8 | % l | 202010101 |


```C

# #include <stdio.h>

int main() {
    int rollno;
    float percen;
    double count;
    

    printf("Enter your rollno:");
    scanf("%d",& rollno);

    printf("Enter your percentage:");
    scanf("%f",& percen);


    printf("Enter your counter");
    scanf("%lf",& count);

    printf("The data entered by user it as follow:\n");

    printf("=============");
    printf("Your rollno is %d, rollno");
    printf("Your percentage is %f, percentage");
    printf("Your counter is %lf, counter");
    }

```



}
