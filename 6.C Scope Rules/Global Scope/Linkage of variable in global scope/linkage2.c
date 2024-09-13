#include <stdio.h>

//declare the external variable and function
extern int a;
void myfun();
int main(void){
  //intialize the global variable
  a=2;

  //call the function to print the value of 'a'
  myfun();
  return 0;
}