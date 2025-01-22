#include <stdio.h>

int main(void){

   char str[50];
   
   printf("Enter the String:");

   scanf("%s",&str);

   printf("Entered String : %s",str);

   return 0;
}

//the string is only scanned till a whitespace is encountered.
//input: hello everyone
//output: hello