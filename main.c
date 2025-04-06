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
    char response[10];
    do
    {
        char title[100];
        char author[100];
        int year;
        printf("Enter Title\n");
        fgets(title, sizeof(title), stdin);
        printf("Enter author\n");
        fgets(author, sizeof(author), stdin);
        printf("Enter the year it was published\n");
        scanf("%d", &year);
        while (getchar() != '\n')
            ;
        printf("Would you like to add another  book? (y/n): ");
        fgets(response, sizeof(response), stdin);
    } while (response[0] == 'y' || response[0] == 'Y');

    Book *head = NULL;

    return 0;
};