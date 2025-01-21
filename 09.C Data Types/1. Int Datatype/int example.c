//C program to print Integer data types.
#include <stdio.h>


int main(void){
  //Integer value with positive data
  int a = 9;

  //Integer value with negative data
  int b = -9;

  //U or u is used for unsigned int in c .
  int c =89U;

  //L or l is used for long int in c 
   long int d  = 99998L;


   printf("Integer value with positive data: %d\n",a);
   printf("Integer value with negative data: %d\n",b);
   printf("Integer value with an unsigned int  data: %u\n",c);
   printf("Integer value with positive data: %ld\n",d);

   return 0;
   
}