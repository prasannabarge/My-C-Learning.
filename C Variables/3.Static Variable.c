#include <stdio.h>

void function(){
  int x =20; //local variable
  static int y = 30; //static variable
  x+=10;//x= x+10;
  y+=10;//y= y+10;
  printf("\tLocal: %d\n\tStatic: %d\n",x,y);
}
int main(){
  printf("First Call\n");
  function();
  printf("Second Calln\n");
  function();
  printf("Third Call\n");
  function();
  return 0;
}

//syntax: 
//static data_type variable_name = initial_value;

//? the default value of static variable is zero
