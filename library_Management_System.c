#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_BOOKS 10
#define MAX_TITLE_LEN 100
#define MAX_AUTHOR_LEN 50
#define ISBN_LEN 13

typedef struct {
    char title[MAX_TITLE_LEN];
    char author[MAX_AUTHOR_LEN];
    char isbn[ISBN_LEN + 1];  // 13 digits + null terminator
} Book;

void boilerPlate();
int tree();
void addBook(Book books[], int *count), fbookName(), fisbn(), fauthor(), ftitle(), fupdateRecord(), fdeleteRecord(), fexportToFile(), fimportFromFile();

// Global variables and arrays
int option;
int count = 0;
Book books[MAX_BOOKS];      // Array to store up to 10 books

// Main function
int main() {
    while (1) {              // Loop to keep showing options until user exits
        boilerPlate();
        printf("Enter your choice: ");
        scanf("%d", &option);
        getchar();           // Consume newline left by scanf

        if (option == 10) {  // Exit condition
            printf("Exiting...\n");
            break;
        }

        tree();
    }
    return 0;
}

// Display options
void boilerPlate() {
    printf("\nChoose Your Operation:\n");
    printf("1. Add a New Book\n");
    printf("2. Display All Books\n");
    printf("3. Fetch a Book by ISBN\n");
    printf("4. Search a Book by Author\n");
    printf("5. Fetch a Book by Title\n");
    printf("6. Update Book Record\n");
    printf("7. Remove Book from Record\n");
    printf("8. Save Book Record to a File\n");
    printf("9. Fetch Book Record from a File\n");
    printf("10. Exit\n");
}

// Helper function prototypes
int isValidISBN(const char *isbn);
int isDuplicateISBN(const Book books[], int count, const char *isbn);
void trimNewline(char *str);

// #1 Add a New Book
void addBook(Book books[], int *count) {
    if (*count >= MAX_BOOKS) {
        printf("Book storage is full.\n");
        return;
    }

    Book newBook;

    // Input Book Title
    printf("Enter Book Title: ");
    fgets(newBook.title, sizeof(newBook.title), stdin);
    trimNewline(newBook.title);
    if (strlen(newBook.title) == 0) {
        printf("Error: Title cannot be empty.\n");
        return;
    }

    // Input Author's Name
    printf("Enter Author's Name: ");
    fgets(newBook.author, sizeof(newBook.author), stdin);
    trimNewline(newBook.author);
    if (strlen(newBook.author) == 0) {
        printf("Error: Author's name cannot be empty.\n");
        return;
    }

    // Input ISBN
    printf("Enter ISBN (13 digits): ");
    fgets(newBook.isbn, sizeof(newBook.isbn), stdin);
    trimNewline(newBook.isbn);

    // Validate ISBN
    if (!isValidISBN(newBook.isbn)) {
        printf("Error: ISBN must be exactly 13 digits long and contain only numbers.\n");
        return;
    }

    // Check for duplicate ISBN
    if (isDuplicateISBN(books, *count, newBook.isbn)) {
        printf("Error: A book with this ISBN already exists in the record.\n");
        return;
    }

    // Add the new book to the array
    books[*count] = newBook;
    (*count)++;
    printf("Book added successfully!\n");
}

// #2 Display All Books
void fbookName() {
    printf("\nStored Books:\n");
    if (count == 0) {
        printf("No books available.\n");
    } else {
        for (int i = 0; i < count; i++) {
            printf("Book %d:\n", i + 1);
            printf("  Title: %s\n", books[i].title);
            printf("  Author: %s\n", books[i].author);
            printf("  ISBN: %s\n", books[i].isbn);
        }
    }
}

// #3 Fetch a Book by ISBN
void fisbn() {
    printf("Fetch Book by ISBN (Feature not implemented yet)\n");
}

// #4 Search Book by Author
void fauthor() {
    printf("Search Book by Author (Feature not implemented yet)\n");
}

// #5 Fetch Book by Title
void ftitle() {
    printf("Fetch Book by Title (Feature not implemented yet)\n");
}

// #6 Update Book Record
void fupdateRecord() {
    printf("Update Book Record (Feature not implemented yet)\n");
}

// #7 Remove Book from Record
void fdeleteRecord() {
    printf("Remove Book from Record (Feature not implemented yet)\n");
}

// #8 Save Book Record to a File
void fexportToFile() {
    printf("Save Book Record to a File (Feature not implemented yet)\n");
}

// #9 Fetch Book Record from a File
void fimportFromFile() {
    printf("Fetch Book Record from a File (Feature not implemented yet)\n");
}

// Process user option
int tree() {
    switch (option) {
        case 1: addBook(books, &count); break;
        case 2: fbookName(); break;
        case 3: fisbn(); break;
        case 4: fauthor(); break;
        case 5: ftitle(); break;
        case 6: fupdateRecord(); break;
        case 7: fdeleteRecord(); break;
        case 8: fexportToFile(); break;
        case 9: fimportFromFile(); break;
        default:
            printf("Invalid option. Please choose a valid operation.\n");
            break;
    }
    return 0;
}

// Helper function to validate ISBN (must be exactly 13 digits)
int isValidISBN(const char *isbn) {
    if (strlen(isbn) != ISBN_LEN) return 0;
    for (int i = 0; i < ISBN_LEN; i++) {
        if (!isdigit(isbn[i])) return 0;
    }
    return 1;
}

// Helper function to check for duplicate ISBN
int isDuplicateISBN(const Book books[], int count, const char *isbn) {
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].isbn, isbn) == 0) {
            return 1;  // Duplicate found
        }
    }
    return 0;
}

// Helper function to trim newline character from fgets input
void trimNewline(char *str) {
    str[strcspn(str, "\n")] = '\0';
}
