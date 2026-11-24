/*
  Week 7 Activity: C Files - Task 1
  Library Borrowed Books Tracker
  
  BCS-05-0551/2026
  CYRUS KIIRU
 
 */

#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char title[200];
    char choice;

    printf("=== Library Borrowed Books Tracker ===\n\n");

    do {
        printf("Enter book title: ");
        if (fgets(title, sizeof(title), stdin) == NULL) {
            break;
        }

        
        title[strcspn(title, "\r\n")] = '\0';

        // Open file in append mode ("a") so existing records are preserved
        file = fopen("borrowed_books.txt", "a");
        if (file == NULL) {
            perror("Error opening borrowed_books.txt");
            return 1;
        }

        fprintf(file, "%s\n", title);
        fclose(file);

        printf("Confirmation: \"%s\" has been successfully stored in borrowed_books.txt.\n\n", title);

        printf("Do you want to add another book title? (y/n): ");
        scanf(" %c", &choice);
        getchar(); 
        printf("\n");

    } while (choice == 'y' || choice == 'Y');

    printf("All entries saved. Exiting program.\n");
    return 0;
}
