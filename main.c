#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    char *title;
    char *author;
    int year;
    struct Book *next;
} Book;

//without typdef, we would have to use struct Book myBook;

Book createBook(char *title, char *author, int year) {

    Book *newBook = malloc(sizeof(Book));




};



int main(void)
{

    return 0;
};