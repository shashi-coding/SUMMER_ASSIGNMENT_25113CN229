#include <stdio.h>

int main() {
    int totalSeats = 50;
    int booked = 0;
    int choice, tickets;

    do {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Book Ticket\n");
        printf("2. Cancel Ticket\n");
        printf("3. View Available Seats\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter number of tickets to book: ");
                scanf("%d", &tickets);

                if (tickets <= 0) {
                    printf("Invalid number of tickets.\n");
                }
                else if (tickets <= (totalSeats - booked)) {
                    booked += tickets;
                    printf("Tickets booked successfully.\n");
                } else {
                    printf("Not enough seats available.\n");
                }
                break;

            case 2:
                printf("Enter number of tickets to cancel: ");
                scanf("%d", &tickets);

                if (tickets <= 0) {
                    printf("Invalid number.\n");
                }
                else if (tickets <= booked) {
                    booked -= tickets;
                    printf("Tickets cancelled successfully.\n");
                } else {
                    printf("You cannot cancel more than booked tickets.\n");
                }
                break;

            case 3:
                printf("Available seats: %d\n", totalSeats - booked);
                break;

            case 4:
                printf("Thank you for using Ticket Booking System!\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}