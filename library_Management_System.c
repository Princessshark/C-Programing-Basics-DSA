#include <stdio.h>
#include <string.h>

void boilerPlate();
int tree();
void fnewBook(), fbookName(), fisbn(), fauthor(), ftitle(), fupdateRecord(), fdeleteRecord(), fexportToFile(), fimportFromFile();

int option;
int count = 0;               // Keeps track of the number of books stored
char books[10][100];         // Array to store up to 10 books, each title up to 99 characters long
char Book[100];              // Array to store a single book title

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

// #1 Add a New Book
void fnewBook() {
    if (count >= 10) {
        printf("Book storage is full.\n");
        return;
    }

    printf("Enter Book Name (or type 'done' to stop): ");
    fgets(Book, sizeof(Book), stdin);
    Book[strcspn(Book, "\n")] = '\0';  // Remove newline character

    if (strcmp(Book, "done") != 0) {
        strncpy(books[count], Book, sizeof(books[count]) - 1);
        books[count][sizeof(books[count]) - 1] = '\0';  // Ensure null termination
        count++;
        printf("Book added successfully!\n");
    }
}

// #2 Display All Books
void fbookName() {
    printf("\nStored Book Titles:\n");
    if (count == 0) {
        printf("No books available.\n");
    } else {
        for (int i = 0; i < count; i++) {
            printf("Book %d: %s\n", i + 1, books[i]);
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
        case 1: fnewBook(); break;
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
