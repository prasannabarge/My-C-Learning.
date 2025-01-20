#include <stdio.h>
int main(){
  const int a = 100;
  printf("the value of a is: %d",a);
  return 0;

  
}

/*
this code will give you error: 

#include <stdio.h>


int main() {
  const int a = 11;
  a = a + 2;
  printf("%d", a);
  return 0;
}
  because const value does not change
*/