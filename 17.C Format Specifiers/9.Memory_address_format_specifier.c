//we can use %p to print addresses and pointers in c

#include <stdio.h>

int main(void){
  int a = 10;
  printf("The memory Address of a: %p\n",(void*)&a);
}