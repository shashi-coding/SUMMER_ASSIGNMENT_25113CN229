#include <stdio.h>
#include <string.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item inv[100];
    int n = 0, choice, i, found, id, qty;

    do {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Item\n");
        printf("2. View Items\n");
        printf("3. Search Item\n");
        printf("4. Update Quantity\n");
        printf("5. Delete Item\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter Item ID: ");
                scanf("%d", &inv[n].id);

                printf("Enter Item Name: ");
                scanf("%s", inv[n].name);

                printf("Enter Quantity: ");
                scanf("%d", &inv[n].quantity);

                printf("Enter Price: ");
                scanf("%f", &inv[n].price);

                n++;
                printf("Item added successfully.\n");
                break;

            case 2:
                printf("\nID\tName\tQty\tPrice\n");
                for (i = 0; i < n; i++) {
                    printf("%d\t%s\t%d\t%.2f\n",
                           inv[i].id,
                           inv[i].name,
                           inv[i].quantity,
                           inv[i].price);
                }
                break;

            case 3:
                printf("Enter Item ID to search: ");
                scanf("%d", &id);

                found = 0;
                for (i = 0; i < n; i++) {
                    if (inv[i].id == id) {
                        printf("Found: %s | Qty: %d | Price: %.2f\n",
                               inv[i].name,
                               inv[i].quantity,
                               inv[i].price);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Item not found.\n");
                }
                break;

            case 4:
                printf("Enter Item ID to update quantity: ");
                scanf("%d", &id);

                found = 0;
                for (i = 0; i < n; i++) {
                    if (inv[i].id == id) {
                        printf("Enter new quantity: ");
                        scanf("%d", &qty);
                        inv[i].quantity = qty;
                        printf("Quantity updated successfully.\n");
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Item not found.\n");
                }
                break;

            case 5:
                printf("Enter Item ID to delete: ");
                scanf("%d", &id);

                found = 0;
                for (i = 0; i < n; i++) {
                    if (inv[i].id == id) {
                        for (int j = i; j < n - 1; j++) {
                            inv[j] = inv[j + 1];
                        }
                        n--;
                        printf("Item deleted successfully.\n");
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Item not found.\n");
                }
                break;

            case 6:
                printf("Exiting system...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 6);

    return 0;
}