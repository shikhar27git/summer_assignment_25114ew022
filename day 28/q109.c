#include <stdio.h>
#include <string.h>

struct Library
{
    int id;
    char name[50];
    char author[50];
    int issued;   // 0 = Available, 1 = Issued
};

int main()
{
    struct Library book[100];
    int n = 0, choice, i, searchId;

    while (1)
    {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Book ID: ");
            scanf("%d", &book[n].id);

            printf("Enter Book Name: ");
            scanf(" %[^\n]", book[n].name);

            printf("Enter Author Name: ");
            scanf(" %[^\n]", book[n].author);

            book[n].issued = 0;
            n++;

            printf("Book Added Successfully!\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No books available.\n");
            }
            else
            {
                printf("\nBook List:\n");
                for (i = 0; i < n; i++)
                {
                    printf("\nBook ID : %d", book[i].id);
                    printf("\nBook Name : %s", book[i].name);
                    printf("\nAuthor : %s", book[i].author);

                    if (book[i].issued == 0)
                        printf("\nStatus : Available\n");
                    else
                        printf("\nStatus : Issued\n");
                }
            }
            break;

        case 3:
            printf("Enter Book ID to Search: ");
            scanf("%d", &searchId);

            for (i = 0; i < n; i++)
            {
                if (book[i].id == searchId)
                {
                    printf("\nBook Found!\n");
                    printf("Book Name : %s\n", book[i].name);
                    printf("Author : %s\n", book[i].author);

                    if (book[i].issued == 0)
                        printf("Status : Available\n");
                    else
                        printf("Status : Issued\n");

                    break;
                }
            }

            if (i == n)
                printf("Book not found!\n");

            break;

        case 4:
            printf("Enter Book ID to Issue: ");
            scanf("%d", &searchId);

            for (i = 0; i < n; i++)
            {
                if (book[i].id == searchId)
                {
                    if (book[i].issued == 0)
                    {
                        book[i].issued = 1;
                        printf("Book Issued Successfully!\n");
                    }
                    else
                    {
                        printf("Book is already issued.\n");
                    }
                    break;
                }
            }

            if (i == n)
                printf("Book not found!\n");

            break;

        case 5:
            printf("Thank You!\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}