#include <stdio.h>
#include <string.h>

struct book {
    char title[50];
    char author[50];
    int copies;
};

struct book library[100];
int count = 0;

void addBook() {
    printf("Enter book details:\n");
    printf("Title: ");
    scanf("%s", library[count].title);
    printf("Author: ");
    scanf("%s", library[count].author);
    printf("Number of copies: ");
    scanf("%d", &library[count].copies);
    count++;
    printf("Book added successfully.\n");
}

void displayBooks() {
    int i;
    printf("Books in library:\n");
    for(i=0; i<count; i++) {
        printf("%d. Title: %s, Author: %s, Copies: %d\n", i+1, library[i].title, library[i].author, library[i].copies);
    }
}

void listBooksByAuthor() {
    char author[50];
    int i, flag = 0;
    printf("Enter the author's name: ");
    scanf("%s", author);
    printf("Books by %s:\n", author);
    for(i=0; i<count; i++) {
        if(strcmp(library[i].author, author) == 0) {
            printf("Title: %s, Copies: %d\n", library[i].title, library[i].copies);
            flag = 1;
        }
    }
    if(flag == 0) {
        printf("No books found by %s.\n", author);
    }
}

void listBookCount() {
    printf("Number of books in library: %d\n", count);
}

int main() {
    int choice;
    while(1) {
        printf("\nLibrary Menu:\n");
        printf("1. Add book details\n");
        printf("2. Display book details\n");
        printf("3. List all books of given author\n");
        printf("4. List the count of books in the library\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                listBooksByAuthor();
                break;
            case 4:
                listBookCount();
                break;
            case 5:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

