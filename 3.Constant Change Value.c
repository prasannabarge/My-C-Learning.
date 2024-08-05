//? C program to change the value of a constant variable

#include <stdio.h>
int main(void){
  //defining an integer constant
  const int var =10;
  printf("Initial value of Constant: %d\n",var);

  //defining a pointer to that const variable 
  int*ptr= (int*)&var;
  //explicit cast to remove constness
  //changing value
  *ptr = 500;

  printf("Final value of constant: %d\n",var);
  printf("Accessing through pointer: %d\n",*ptr);
  return 0;
}

