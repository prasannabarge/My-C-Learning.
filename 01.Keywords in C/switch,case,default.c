// C program to demonstrate 
// switch case statement
// Driver code


#include <stdio.h>
int main(){ 
  int i = 4;
  switch (i){
    case 1:
    printf("Case 1\n");break;
    case 2:
    printf("Case 2\n");break;
    case 3:
    printf("Case 3\n");break;
    case 4:
    printf("Case 4\n");break;//4 is output
    default:
    printf("Default\n");break;

  }


}





/*
*syntax of switch statement:
switch(Expression)
{
    case '1': // operation 1
            break;
    case:'2': // operation 2
            break;
    default: // default statement to be executed 
}
*/