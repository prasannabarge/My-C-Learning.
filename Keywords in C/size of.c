//c program to demonstrate size of keyword

#include <stdio.h>
//main code
int main(void){

  //to declare the integer size
  int x = 10;
  printf("%d\n",sizeof(x));
  

  //to declare the char size
  char c = 'c';
  printf("%c\n",sizeof(c));
  
  // to declare the float size
  float f = 56.4;
  printf("%f",sizeof(f));
  return 0;

  

}