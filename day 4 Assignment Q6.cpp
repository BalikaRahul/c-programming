#include <stdio.h>
#include <string.h>

// Define the book structure
struct Book {
    char title[50];
    char author[50];
    int year;
    int pages;
};

// Function to add book details
void add_book(struct Book library[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter the details of book-%d:\n", i + 1);
        printf("Title: ");
        scanf("%s", library[i].title);
        printf("Author: ");
        scanf("%s", library[i].author);
        printf("Year of publication: ");
        scanf("%d", &library[i].year);
        printf("Number of pages: ");
        scanf("%d", &library[i].pages);
    }
    printf("Book details added successfully.\n");
}

// Function to display book details
void display_books(struct Book library[], int n) {
    printf("Book details in library:\n");
    printf("Title\t\tAuthor\t\tYear\tPages\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t%s\t%d\t%d\n", library[i].title, library[i].author, library[i].year, library[i].pages);
    }
}

// Function to list all books of a given author
void list_books_by_author(struct Book library[], int n) {
    char author[50];
    int count = 0;
    printf("Enter the author name: ");
    scanf("%s", author);
    printf("Books by author '%s':\n", author);
    printf("Title\t\tAuthor\t\tYear\tPages\n");
    for (int i = 0; i < n; i++) {
        if (strcmp(library[i].author, author) == 0) {
            printf("%s\t%s\t%d\t%d\n", library[i].title, library[i].author, library[i].year, library[i].pages);
            count++;
        }
    }
    printf("Total number of books by author '%s': %d\n", author, count);
}

// Function to list the count of books in the library
void count_books(struct Book library[], int n) {
    printf("Total number of books in library: %d\n", n);
}

int main() {
    int choice, n;
    struct Book library[50];
    printf("MENU\n");
    printf("PRESS 1. TO ADD BOOK DETAILS.\n");
    printf("PRESS 2. TO DISPLAY BOOK DETAILS.\n");
    printf("PRESS 3. TO LIST ALL BOOKS OF GIVEN AUTHOR.\n");
    printf("PRESS 4. TO LIST THE COUNT OF BOOKS IN THE LIBRARY.\n");
    printf("PRESS 5. TO EXIT.\n");
    do {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("How many records you want to add: ");
                scanf("%d", &n);
                add_book(library, n);
                break;
            case 2:
                display_books(library, n);
                break;
            case 3:
                list_books_by_author(library, n);
                break;
            case 4:
                count_books(library, n);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(choice != 5);
    return 0;
}