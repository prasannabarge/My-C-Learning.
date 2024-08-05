// C Program to define a constant using #define
#include <stdio.h>
#define pi 3.14

int main()
{

    printf("The value of pi: %.2f", pi);//3.14;
    return 0;
}



/*
*Note: This method for defining constant is not preferred as it may introduce bugs and make the code difficult to maintain.
*/