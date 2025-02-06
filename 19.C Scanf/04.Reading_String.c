#include <stdio.h>

int main(void){
  //Strings are stored in this

  char name[50];
  printf("Enter your name: ");

  //reading a string
  scanf("%s",&name);
  printf("hello %s welcome to the World of c",name);

  return 0;
}