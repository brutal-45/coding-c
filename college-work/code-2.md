## C Program to check size of variables

```c

#include <stdio.h>

int main()
{
  int rollno=1;
  char grade='A';
  float percen=80.50;
  double count=202012101;
   
  printf("size of grade=%d bytes\n",sizeof(rollno));
  printf("size of count= %d bytes\n",sizeof(grade));
  printf("size of percen=%d bytes\n",sizeof(percen));
  return 0;

}

```
