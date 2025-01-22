//C Program to illustrate the %c format specifier

#include <stdio.h>

int main(void){ 
  char c;
  
  
  printf("Enter some character:");
  
  scanf("%c",&c);

  
  printf("The eneterd character is: %c",c);

  return 0;
}