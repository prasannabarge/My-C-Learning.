#include <stdio.h>

//variables with internal linkage

static int animals = 8;

//Function with internal linkage
void printAnimals(){
  printf("%d \n",animals);
  
}