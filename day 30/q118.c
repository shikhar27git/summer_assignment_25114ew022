#include <stdio.h>
#include <string.h>

#define MAX 50

int main() {
    int n, i, found = 0;
    char title[MAX][50], author[MAX][50], search[50];

    printf("Enter the number of books: ");
    scanf("%d", &n);

    // Input book details
    for(i = 0; i < n; i++) {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book Title: ");
        scanf("%s", title[i]);

        printf("Author Name: ");
        scanf("%s", author[i]);
    }

    // Display all books
    printf("\n----- Library Books -----\n");
    printf("Title\t\tAuthor\n");

    for(i = 0; i < n; i++) {
        printf("%s\t\t%s\n", title[i], author[i]);
    }

    // Search book by title
    printf("\nEnter Book Title to Search: ");
    scanf("%s", search);

    for(i = 0; i < n; i++) {
        if(strcmp(title[i], search) == 0) {
            printf("\nBook Found!\n");
            printf("Title : %s\n", title[i]);
            printf("Author: %s\n", author[i]);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("\nBook not found.\n");
    }

    return 0;
}