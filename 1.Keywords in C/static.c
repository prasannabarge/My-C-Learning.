#include <stdio.h>
int main(void){
  static int num ;
  num = 10;
  printf("the value of static int is: %d",num);
  return 0;
  
}