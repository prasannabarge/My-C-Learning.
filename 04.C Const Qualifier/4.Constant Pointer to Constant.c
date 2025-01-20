//? const int* const ptr;
#include <stdio.h>

int main(void)
{
    int a = 10;

    // Constant pointer to a constant integer
    const int* const ptr = &a;

    // Print the value pointed to by ptr
    printf("Value of *ptr: %d\n", *ptr);

    // Attempting to modify the value of the integer pointed to by ptr will cause a compile error
    // *ptr = 20; // This line will cause a compilation error

    // Attempting to change the address stored in ptr will also cause a compile error
    // int b = 30;
    // ptr = &b; // This line will also cause a compilation error

    return 0;
}
