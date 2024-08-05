#include <stdio.h>

extern int a;  // Declaration of the external variable

int a = 10;  // Definition of the external variable

int main() {
    printf("%d", a);  // Output will be 10
    return 0;
}
