// C Program to demonstrate using of
// bool as a function return type
#include <stdio.h>
#include <stdbool.h>

//function returning boolean values
bool is_even (int num){
  if (num%2 == 0)
  {
    return true;
  }
  else {
    return false;

  }
  
}
//main function
int main(){
  //Integer value decalred

  int num = 5;

  //function calling 
  if (is_even(num))
  {
    printf("%d is even \n",num);
  }
  else{
    printf("%d is odd \n",num);
  }
  return 0;
  
  
}