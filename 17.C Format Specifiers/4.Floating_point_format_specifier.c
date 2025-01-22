// c program to demonstratet the use of %f, %e and%E

#include <stdio.h>

int main(void){
  float a = 12.67;

  printf("Using %%f: %f\n",a);
  printf("Using %%e: %e\n",a); //it will give point after one and also for E
  printf("Using %%E: %E\n",a);

  return 0 ;

}