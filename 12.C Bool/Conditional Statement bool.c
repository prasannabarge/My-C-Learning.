//c Program to implement
//conditional statements

#include <stdbool.h>
#include <stdio.h>

//Main function 
int main(void){

  //Integer declared
  int a= 3;
  int b=4;

  //conditional statements
  if (a>b)
  {
    printf("a is greater\n");
  }
  else{
    printf("a is smaller \n");

  }

  printf("%d is the result of a>b",a>b);

  return 0 ;
  
}
