//c code to illustrate Internal Linkage

#include <stdio.h>
#include "animals.c" //note that animals is included

int main(void){
  call_me();
  printf("\n having fun washing!");
  animals  =10;
  printf("%d\n",animals);
  return 0;
}