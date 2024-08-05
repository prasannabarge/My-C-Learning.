#include <stdio.h>
 
int p = 7; //global variable

void function1(){
  printf("the value of function 1 is: %d\n",p);
}

void function2(){
  printf("the value of function 2 is: %d",p);
}

int main(void){
  function1();
  function2();
  return 0;

}