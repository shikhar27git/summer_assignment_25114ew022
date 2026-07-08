#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], rev[100];
    int choice, i, len;

    while (1)
    {
        printf("\n===== MENU DRIVEN STRING OPERATIONS =====\n");
        printf("1. Input String\n");
        printf("2. Display String\n");
        printf("3. Find Length\n");
        printf("4. Reverse String\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter a string: ");
                scanf(" %[^\n]", str);
                break;

            case 2:
                printf("String: %s\n", str);
                break;

            case 3:
                len = strlen(str);
                printf("Length = %d\n", len);
                break;

            case 4:
                len = strlen(str);
                for (i = 0; i < len; i++)
                {
                    rev[i] = str[len - 1 - i];
                }
                rev[len] = '\0';
                printf("Reversed String: %s\n", rev);
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