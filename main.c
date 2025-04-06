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
    newBook->next = NULL;
    return newBook;
};

void addBookToTail(Book **head, Book *newBook)
{
    if (*head == NULL)
    {
        *head = newBook;
    }
    else
    {
        Book *current = *head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newBook;
    }
};

int main(void)
{
    Book *head = NULL;
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
        Book *newBook = createBook(title, author, year); // we use the memory addresses of the new book in order to return the pointer to a heap-allocated block (this allows us to use this outside of the function scope)
        addBookToTail(&head, newBook);
    } while (response[0] == 'y' || response[0] == 'Y');

    return 0;
};