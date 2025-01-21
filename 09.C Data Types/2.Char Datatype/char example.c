//C program to print Integer data type

#include <stdio.h>

int main(void){
  char a = 'a';
  char c;

  printf("Value of a: %c\n",a);

  a++;
  printf("value of a after increment is: %c\n",a);


  //c is assigned ASCII values
  //which corresponds to the character 'c'
  //a-->97 b-->98 c-->99
  //here c will be printed
  c= 99;

  printf("value of c: %c",c);

  return 0;
}