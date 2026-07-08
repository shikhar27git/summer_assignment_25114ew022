#include <stdio.h>

struct Bank
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct Bank customer;
    int choice;
    float amount;

    printf("Create Bank Account\n");
    printf("Enter Account Number: ");
    scanf("%d", &customer.accNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", customer.name);

    customer.balance = 0;

    while (1)
    {
        printf("\n===== BANK ACCOUNT SYSTEM =====\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                customer.balance += amount;
                printf("Amount Deposited Successfully!\n");
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if (amount <= customer.balance)
                {
                    customer.balance -= amount;
                    printf("Withdrawal Successful!\n");
                }
                else
                {
                    printf("Insufficient Balance!\n");
                }
                break;

            case 3:
                printf("\nAccount Number : %d\n", customer.accNo);
                printf("Account Holder : %s\n", customer.name);
                printf("Current Balance : %.2f\n", customer.balance);
                break;

            case 4:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}