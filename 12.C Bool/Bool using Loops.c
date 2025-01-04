// C   program to demonstrate
//using bool in loops

#include <stdbool.h>
#include <stdio.h>

//main function
int main(void){
   bool a  = true;
   int i  = 0;

   //while loop
    
    while (a)
    {
      printf("i is %d\n",i);
      i++;


    //conditional statement returning
    //true or false
    //Breaking point for loop
    if (i>5)
    {
      a  = false;
    }
    
    }
    return 0 ;
    
    
}