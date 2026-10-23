## we are using here int , float , char and bouble variable.

```c
#include<stdio.h>
int main()
{
  int rollno;
  float percen;
  char grade;
  double count;

  printf("Enter your roll:");
  scanf("%d",&rollno);
  
  printf("Enter your percentage:");
  scanf("%f",&percen);
  
  printf("Enter your grade;");
  scanf("%C",&grade);
  
  printf("Enter your counter:");
  scanf("%lf",&count);
  
  printf("The data enterd by user is as follow:\n");
  printf("========================================\n");
  printf("Your Rollno is %d",rollno);
  printf("Your percentage is %f",percen);
  printf("your grade is %c",grade);
  printf("your counter is %ld",count);
  return 0;
  
} 

 
}
