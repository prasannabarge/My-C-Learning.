#include <stdio.h>
#define var 7
int main(void){
  printf("%d\t",var);

  #ifdef var
  #undef var
  // redefine var as 10
  #define var 14
  #endif
  printf("%d",var);
  return 0;
}
/*
*#define name value
*/
//?Hence it wouldn’t be recommended because Macros doesn’t carry type checking information and also prone to error.