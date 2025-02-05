#include <stdio.h>

int main(void){
  int n = 2451;
  float b = 2451;
  char c[]  = "geeksforgeeks";

  //Precision for integeral data

  printf("%.10d\n",n);
  printf("%.10f\n",b);
  printf("%.10s",c);
  return 0;
}

//it completes the 10 digits as we write above 
//for eg 2451 is four digits so remaining are 6 to print 10 so in int we will not printing above so we need to print back word because it has no values and for flaot after . it does not matter how much value it take 