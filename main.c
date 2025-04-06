#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct Book
{
    char *title;
    char *author;
    int year;
    struct Book *next;
} Book;

Book *createBook(char *title, char *author, int year)
{
    Book *newBook = malloc(sizeof(Book));
    newBook->title = malloc(strlen(title) + 1);
    strcpy(newBook->title, title);
    newBook->author = malloc(strlen(author) + 1);
    strcpy(newBook->author, author);
    newBook->year = year;
    return newBook;
};

int main(void)
{
    
    Book *head = NULL;


    return 0;
};