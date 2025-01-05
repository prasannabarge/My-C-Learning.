#include <stdio.h>

int main(void){
  char a = 0xfb;
  unsigned char b = 0xfb;

  printf("a=%c",a);
  printf("\nb= %c",b);

  if(a==b){
    printf("\n Same");

  }
  else{
    printf("\n Not same");

  }
  return 0 ;

}
// When we print ‘a’ and ‘b’, same character is printed, but when we compare them, we get the output as “Not Same”. ‘a’ and ‘b’ have same binary representation as char. But when comparison operation is performed on ‘a’ and ‘b’, they are first converted to int. ‘a’ is a signed char, when it is converted to int, its value becomes -5 (signed value of 0xfb). ‘b’ is unsigned char, when it is converted to int, its value becomes 251. The values -5 and 251 have different representations as int, so we get the output as “Not Same”. 