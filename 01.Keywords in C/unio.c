#include <stdio.h>
union student{
  int age;
  char marks;
}s;
//main code
int main(void){
  s.age = 15;
  s.marks = 56;
  printf("age = %d",s.age);
  printf("\n marks = %d",s.marks);
  return 0;
  
}