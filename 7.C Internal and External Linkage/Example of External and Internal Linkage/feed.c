#include <stdio.h>

//telling compiler that the function have external linkage 
extern void printAnimals();

int main(){
  printAnimals();
  return 0;
}