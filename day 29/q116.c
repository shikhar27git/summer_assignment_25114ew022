#include <stdio.h>
#include <string.h>

struct Product
{
    int id;
    char name[50];
    int quantity;
};

int main()
{
    struct Product p[100];
    int n = 0, choice, i, id, qty;

    while (1)
    {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Update Quantity\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Product ID: ");
                scanf("%d", &p[n].id);

                printf("Enter Product Name: ");
                scanf(" %[^\n]", p[n].name);

                printf("Enter Quantity: ");
                scanf("%d", &p[n].quantity);

                n++;
                printf("Product Added Successfully!\n");
                break;

            case 2:
                if (n == 0)
                {
                    printf("No products available.\n");
                }
                else
                {
                    printf("\nProduct List:\n");
                    for (i = 0; i < n; i++)
                    {
                        printf("\nProduct ID : %d", p[i].id);
                        printf("\nProduct Name : %s", p[i].name);
                        printf("\nQuantity : %d\n", p[i].quantity);
                    }
                }
                break;

            case 3:
                printf("Enter Product ID to Search: ");
                scanf("%d", &id);

                for (i = 0; i < n; i++)
                {
                    if (p[i].id == id)
                    {
                        printf("\nProduct Found!\n");
                        printf("ID : %d\n", p[i].id);
                        printf("Name : %s\n", p[i].name);
                        printf("Quantity : %d\n", p[i].quantity);
                        break;
                    }
                }

                if (i == n)
                    printf("Product not found!\n");

                break;

            case 4:
                printf("Enter Product ID: ");
                scanf("%d", &id);

                for (i = 0; i < n; i++)
                {
                    if (p[i].id == id)
                    {
                        printf("Enter New Quantity: ");
                        scanf("%d", &qty);

                        p[i].quantity = qty;
                        printf("Quantity Updated Successfully!\n");
                        break;
                    }
                }

                if (i == n)
                    printf("Product not found!\n");

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