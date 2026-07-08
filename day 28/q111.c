#include <stdio.h>

int main()
{
    int totalSeats = 10;
    int booked = 0;
    int choice, seats;

    while (1)
    {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Book Ticket\n");
        printf("2. Cancel Ticket\n");
        printf("3. Check Available Seats\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter number of seats to book: ");
                scanf("%d", &seats);

                if (seats <= (totalSeats - booked))
                {
                    booked = booked + seats;
                    printf("Ticket Booked Successfully!\n");
                }
                else
                {
                    printf("Not enough seats available!\n");
                }
                break;

            case 2:
                printf("Enter number of seats to cancel: ");
                scanf("%d", &seats);

                if (seats <= booked)
                {
                    booked = booked - seats;
                    printf("Ticket Cancelled Successfully!\n");
                }
                else
                {
                    printf("Invalid number of seats!\n");
                }
                break;

            case 3:
                printf("Total Seats     : %d\n", totalSeats);
                printf("Booked Seats    : %d\n", booked);
                printf("Available Seats : %d\n", totalSeats - booked);
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