#include <stdio.h>

int main(void){
  //Strings are stored in this
  char name[50];
  printf("Enter your name:");


  //reading a string
  scanf("%[^r]s",name);
  printf("hello %s!",name);
  return 0;
}

// Syntax:
// scanf(“%[set]”, variable);

//for eg input: prasanna
//output: hello p! 
//it is because i write char r in [] which will ignored after it spotted in my name like for:prasanna from second char spotted 'r it will ignore all next char including r and only print p! hope you understand