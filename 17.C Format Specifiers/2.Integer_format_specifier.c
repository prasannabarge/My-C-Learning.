//C Program to demonstrate the use of %d and %i 

#include <stdio.h>

int main(void){
  int x;

  printf("please enter the value: ");
   
   //taking the input
  scanf("%d",&x);

  //printing the output as user entered

  printf("Printing using %%d: %d\n",x);
  printf("Printing using %%i: %3i\n",x);

  return 0;


}