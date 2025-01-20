#include <stdio.h>
int main(void){
  //variable
  int not_const ;
  
  //constant variable
const int constant = 20;

//changing the values
not_const = 45;
/*constant = 24;it will give error because constant values are changed it will give an error again because we defined the variable again*/

printf("the value of not constant is: %d\n",not_const);
printf("the value of constant is %d",constant);
return 0;

}


/*
*Syntax of Const Variable in C:
*const data_type variable_name = value;
*/