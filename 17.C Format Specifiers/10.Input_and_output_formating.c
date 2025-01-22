// C Program to demonstrate the formating methods

#include <stdio.h>

int main(void){
    
    char str[]= "Prasanna";


    printf("%20s\n",str);
    printf("%-20s\n",str);//A minus(-) sign tells left alignment.
    printf("%20.5s\n",str);//A period( . ) symbol separates field width with precision.
    printf("%-20.5s\n",str);

    return 0;
}