#include <stdio.h>

int main(void){
  char a = 'A';
  char b = 'B';
   
   printf("a =%c\n",a);
   printf("b= %c\n",b);
   printf("a+b= %c\n",a+b);

   return 0 ;
}

// Note that in character arithmetic, the characters are treated as integers based on their ASCII code values. For example, the ASCII code for ‘A’ is 65 and for ‘B’ is 66, so adding ‘A’ and ‘B’ results in 65 + 66 = 131, which is the ASCII code for ‘â’.
