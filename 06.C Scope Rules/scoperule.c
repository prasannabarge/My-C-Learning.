#include <stdio.h>
int main(void){
  //scope of this variables is within main() function only.
  int var = 34;
  printf("%d",var);
  return 0;

}
//function where we try to access the var defined in main()
void func(){
  main();
  //if we try to print this printf("%d",var); in function "func" then it will give me error
}