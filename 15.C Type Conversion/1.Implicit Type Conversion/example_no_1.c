//an example of implicit conversion
//also known as automatic type conversion

#include <stdio.h>

int main(void){
    int x  = 11; //integer x
    char y = 'b'; //character y
    
    //y impplicitly converted to int. ASCII value of 'b' 98
    x = x+y;

    float z = x+ 1.0;

    printf("x= %d,z=%f",x,z);

    return 0 ;
}