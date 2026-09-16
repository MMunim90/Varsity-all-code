#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

struct Book {
    char title[100];
    char author[100];
    char genre[50];
    int available;
};

struct Library {
    struct Book books[MAX_BOOKS];
    int num_books;
};

void add_book(struct Library *library);
void search_by_title(struct Library *library, const char *title);
void search_by_author(struct Library *library, const char *author);
void search_by_genre(struct Library *library, const char *genre);
void sort_books_by_title(struct Library *library);
void display_menu();
void display_books(struct Library *library);

int main() {
    struct Library library;
    library.num_books = 0;

    int choice;
    char search_term[100];

    do {
        display_menu();
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter book title: ");
                scanf("%s", search_term);
                search_by_title(&library, search_term);
                break;
            case 2:
                printf("Enter author name: ");
                scanf("%s", search_term);
                search_by_author(&library, search_term);
                break;
            case 3:
                printf("Enter genre: ");
                scanf("%s", search_term);
                search_by_genre(&library, search_term);
                break;
            case 4:
                sort_books_by_title(&library);
                display_books(&library);
                break;
            case 5:
                display_books(&library);
                break;
            case 6:
                add_book(&library);
                break;
            case 0:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}

void add_book(struct Library *library) {
    if (library->num_books < MAX_BOOKS) {
        printf("Enter book title: ");
        scanf("%s", library->books[library->num_books].title);
        printf("Enter author name: ");
        scanf("%s", library->books[library->num_books].author);
        printf("Enter genre: ");
        scanf("%s", library->books[library->num_books].genre);
        library->books[library->num_books].available = 1;
        library->num_books++;
        printf("Book added successfully.\n");
    } else {
        printf("Library is full. Cannot add more books.\n");
    }
}

void search_by_title(struct Library *library, const char *title) {
    printf("Searching for books with title '%s':\n", title);
    for (int i = 0; i < library->num_books; i++) {
        if (strstr(library->books[i].title, title) != NULL) {
            printf("%s by %s\n", library->books[i].title, library->books[i].author);
        }
    }
}

void search_by_author(struct Library *library, const char *author) {
    printf("Searching for books by author '%s':\n", author);
    for (int i = 0; i < library->num_books; i++) {
        if (strstr(library->books[i].author, author) != NULL) {
            printf("%s by %s\n", library->books[i].title, library->books[i].author);
        }
    }
}

void search_by_genre(struct Library *library, const char *genre) {
    printf("Searching for books in genre '%s':\n", genre);
    for (int i = 0; i < library->num_books; i++) {
        if (strstr(library->books[i].genre, genre) != NULL) {
            printf("%s by %s\n", library->books[i].title, library->books[i].author);
        }
    }
}

void sort_books_by_title(struct Library *library) {

    for (int i = 0; i < library->num_books - 1; i++) {
        for (int j = 0; j < library->num_books - i - 1; j++) {
            if (strcmp(library->books[j].title, library->books[j + 1].title) > 0) {

                struct Book temp = library->books[j];
                library->books[j] = library->books[j + 1];
                library->books[j + 1] = temp;
            }
        }
    }
    printf("Books sorted by title.\n");
}

void display_menu() {
    printf("\nLibrary Management System Menu:\n");
    printf("1. Search books by title\n");
    printf("2. Search books by author\n");
    printf("3. Search books by genre\n");
    printf("4. Sort books by title\n");
    printf("5. Display all books\n");
    printf("6. Add a new book\n");
    printf("0. Exit\n");
    printf("Enter your choice: ");
}

void display_books(struct Library *library) {
    printf("Library Books:\n");
    for (int i = 0; i < library->num_books; i++) {
        printf("%s by %s - Genre: %s\n", library->books[i].title, library->books[i].author, library->books[i].genre);
    }
}
