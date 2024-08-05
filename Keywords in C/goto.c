//c program demonstrate 
//goto keyword

#include <stdio.h>
//function to print number
//from 1 to 10
void printnumbers(){
  int n = 1;

  label:
  printf("%d\n",n);
  n++;
  if(n<=10) goto label;
}

//main code
int main(){
  printnumbers();
  return 0;

}