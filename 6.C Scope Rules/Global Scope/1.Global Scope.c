//the global scope refers to the region  outside any block or function
//global is also called file scope

#include <stdio.h>

//variable declared in global scope
int global = 5;

void display(){
  printf("%d\n",global);
}

//main function
int main(void){
  printf("Before change within main: ");
  display();

  //changing value of global
  //variable from main function
  printf("After change within main: ");
  global=10;
  display();
}