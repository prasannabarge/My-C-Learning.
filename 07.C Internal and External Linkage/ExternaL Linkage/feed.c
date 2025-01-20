#include <stdio.h>

//telling compiler that the variable have external linkage

extern int animals;

int main(){
  //Acessing variables
  printf("%d",animals);
  return 0;
}