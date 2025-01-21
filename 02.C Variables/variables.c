/*
 *c program to demonstrate the declaration,defination and initialization
 */
#include <stdio.h>
int main(void){
  //declaration with definations
  int defined_var;

  printf("Defined_var: %d\n",defined_var);

  //intialization
  defined_var = 12;

  //declaration +defination +intialization
  int ini_var = 25;

  printf("Value of defined_var after intialization: %d\n",defined_var);
  printf("value of ini_var: %d",ini_var);

  return 0;
}