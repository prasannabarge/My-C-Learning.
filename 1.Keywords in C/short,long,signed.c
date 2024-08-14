// c program to demonstrate
//short,long,signed,
//and ussigned keyword

#include <stdio.h>
//main code
int main(){
  //short integer
  short int a = 12345;

  //signed integer
  signed int b = -34;

  //unsigned integer
  unsigned int c  =12;

  //L or l is use for
  //long int in c.
  long int d = 99992L;

  printf("integer value with a short int data: %hd",a);
  printf("\n Integer value with a signed int data: %d",b);
  printf("\n Integer value with an unsigned int data: %u",c);
  printf("\n Integer value with a long int data: %ld",d);
  return 0;


}