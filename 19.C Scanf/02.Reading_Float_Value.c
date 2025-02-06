#include <stdio.h>

int main(void){
  float n;

  printf("Enter the value of n: ");
  scanf("%f",&n);
  printf("The value of n is: %.2f",n);
   
   return 0;



}

// ok so let assume we write the value 12.2424 then it will only print the 12.24 and if your value is 12.4 it will print the 12.40 so when high digits after float will cut till 2 and remaining add 0's visit Gfg