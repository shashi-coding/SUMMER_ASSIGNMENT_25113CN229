#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact c[100];
    int n = 0, choice, i, found;
    char searchName[50];

    do {
        printf("\n===== CONTACT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Contact\n");
        printf("2. View Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter name: ");
                scanf("%s", c[n].name);

                printf("Enter phone number: ");
                scanf("%s", c[n].phone);

                n++;
                printf("Contact added successfully.\n");
                break;

            case 2:
                printf("\n--- Contact List ---\n");
                for (i = 0; i < n; i++) {
                    printf("%d. %s - %s\n", i + 1, c[i].name, c[i].phone);
                }
                break;

            case 3:
                printf("Enter name to search: ");
                scanf("%s", searchName);

                found = 0;
                for (i = 0; i < n; i++) {
                    if (strcmp(c[i].name, searchName) == 0) {
                        printf("Found: %s - %s\n", c[i].name, c[i].phone);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Contact not found.\n");
                }
                break;

            case 4:
                printf("Enter name to delete: ");
                scanf("%s", searchName);

                found = 0;
                for (i = 0; i < n; i++) {
                    if (strcmp(c[i].name, searchName) == 0) {
                        for (int j = i; j < n - 1; j++) {
                            c[j] = c[j + 1];
                        }
                        n--;
                        printf("Contact deleted successfully.\n");
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Contact not found.\n");
                }
                break;

            case 5:
                printf("Exiting system...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 5);

    return 0;
}