//?int* const ptr;
#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 20;

    // Constant pointer to an integer
    int* const ptr = &a;

    // Print the value pointed to by ptr
    printf("Value of *ptr: %d\n", *ptr);

    // Modify the value of the integer pointed to by ptr
    *ptr = 30;
    printf("New value of *ptr: %d\n", *ptr);

    // Attempting to change the address stored in ptr is not allowed and will cause a compile error
    // ptr = &b; // This line will cause a compilation error

    return 0;
}
