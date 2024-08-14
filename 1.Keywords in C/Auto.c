/*
* auto is the default storage class variable that is declared inside a function or a block.
*/
//C program to demonstrate
//auto keyword

#include <stdio.h>
 int printvalue(){
  auto int a = 10;
  printf("%d",a);
 }

 //driver code
 int main(){
  printvalue();
  return 0;

 }

 //note: this keyword was more relevant in the earlier days of C, but it is largely unused now