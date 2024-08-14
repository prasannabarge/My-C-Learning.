// i used "auto" keyword..

#include <stdio.h>
void function(){
  int x = 10;//local variable (also automatic)
  auto int y = 20; //automatic variable
  printf("Auto Variable: %d",y);

}
int main(void){
  function();
  return 0;
}

/* //syntax:
*auto data_type variable_name;
        or
*data_type variable_name;    (in local scope)
*/