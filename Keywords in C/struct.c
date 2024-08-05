// C program to demonstrate 
// struct keyword
#include <stdio.h>
#include <string.h>

struct Books {
  char  title[50];
  char  author[50];
};

// Driver code
int main(void ) {
  // Declare Book1 of type Book
  struct Books book1;        
   
 // book 1 specification 
 strcpy(book1.title, "C++ Programming");
 strcpy(book1.author, "Bjarne Stroustrup"); 
 
 // Print book details
 printf("Book 1 title : %s\n", book1.title);
 printf("Book 1 author : %s\n", book1.author);
 return 0;
}

/*
struct Geek {
    char name[50];
    int num;
    double var;
};
*/
