#include <stdio.h>

// Create an alias for 'int' named 'Number'
typedef int Number;

int main(void) {
    Number a = 10; // 'Number' is an alias for 'int', so this is equivalent to 'int a = 10;'
    Number b = 20;
    
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    
    return 0;
}
