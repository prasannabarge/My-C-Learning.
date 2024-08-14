#include <stdio.h>
int mai(void){
  //register variable
  register int var  = 22;
  printf("value of register variable: %d\n",var);
  return 0;

}


//?syntax:
//? register data_type variable_name = intial_value;
//?register variables are stored in cpu raher than ram




/*
*NOTE: We cannot get the address of the register variable using addressof (&) operator because they are stored in the CPU register. The compiler will throw an error if we try to get the address of register variable.
*/