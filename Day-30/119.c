#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[100];
    int n = 0, choice, i, found, id;

    do {
        printf("\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. View Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &emp[n].id);

                printf("Enter Name: ");
                scanf("%s", emp[n].name);

                printf("Enter Salary: ");
                scanf("%f", &emp[n].salary);

                n++;
                printf("Employee added successfully.\n");
                break;

            case 2:
                printf("\nID\tName\tSalary\n");
                for (i = 0; i < n; i++) {
                    printf("%d\t%s\t%.2f\n",
                           emp[i].id,
                           emp[i].name,
                           emp[i].salary);
                }
                break;

            case 3:
                printf("Enter Employee ID to search: ");
                scanf("%d", &id);

                found = 0;
                for (i = 0; i < n; i++) {
                    if (emp[i].id == id) {
                        printf("Found: %d %s %.2f\n",
                               emp[i].id,
                               emp[i].name,
                               emp[i].salary);
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf("Employee not found.\n");
                break;

            case 4:
                printf("Enter Employee ID to update salary: ");
                scanf("%d", &id);

                found = 0;
                for (i = 0; i < n; i++) {
                    if (emp[i].id == id) {
                        printf("Enter new salary: ");
                        scanf("%f", &emp[i].salary);
                        printf("Salary updated successfully.\n");
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf("Employee not found.\n");
                break;

            case 5:
                printf("Enter Employee ID to delete: ");
                scanf("%d", &id);

                found = 0;
                for (i = 0; i < n; i++) {
                    if (emp[i].id == id) {
                        for (int j = i; j < n - 1; j++) {
                            emp[j] = emp[j + 1];
                        }
                        n--;
                        printf("Employee deleted successfully.\n");
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf("Employee not found.\n");
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