#include <stdio.h>

int main(void){  
   int n ;

   //Reading an integer input
   printf("Enter the number: ");
   scanf("%d",&n);
   printf("The value of n is: %d",n);
   return 0;

}

//scanf syntax:
// scanf(“format”, address_of_args… );