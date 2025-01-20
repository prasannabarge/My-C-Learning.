#include <stdio.h>

int main(void)
{
    int i = 10;
    int j = 20;
    /* ptr is pointer to constant */
    const int* ptr = &i;

    printf("ptr: %d\n", *ptr);
    /* The following line is an error because you cannot modify
       the value pointed to by a pointer to a constant integer */
    // *ptr = 100; // This line should be removed or commented out

    ptr = &j; /* valid reassignment */
    printf("ptr: %d\n", *ptr);

    return 0;
}
/*
*const int* ptr = &i;
*OR
*int const *ptr;
*/

