#include <stdio.h>
#include <string.h>

int main() {
    int roll[100], marks[100];
    char name[100][50];
    int n = 0, choice, i, found, r;

    do {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Marks\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter Roll No: ");
                scanf("%d", &roll[n]);

                printf("Enter Name: ");
                scanf("%s", name[n]);

                printf("Enter Marks: ");
                scanf("%d", &marks[n]);

                n++;
                printf("Student added successfully.\n");
                break;

            case 2:
                printf("\nRoll\tName\tMarks\n");
                for (i = 0; i < n; i++) {
                    printf("%d\t%s\t%d\n", roll[i], name[i], marks[i]);
                }
                break;

            case 3:
                printf("Enter Roll No to search: ");
                scanf("%d", &r);

                found = 0;
                for (i = 0; i < n; i++) {
                    if (roll[i] == r) {
                        printf("Found: %d %s %d\n", roll[i], name[i], marks[i]);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Student not found.\n");
                }
                break;

            case 4:
                printf("Enter Roll No to update marks: ");
                scanf("%d", &r);

                found = 0;
                for (i = 0; i < n; i++) {
                    if (roll[i] == r) {
                        printf("Enter new marks: ");
                        scanf("%d", &marks[i]);
                        printf("Marks updated successfully.\n");
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Student not found.\n");
                }
                break;

            case 5:
                printf("Enter Roll No to delete: ");
                scanf("%d", &r);

                found = 0;
                for (i = 0; i < n; i++) {
                    if (roll[i] == r) {
                        for (int j = i; j < n - 1; j++) {
                            roll[j] = roll[j + 1];
                            marks[j] = marks[j + 1];
                            strcpy(name[j], name[j + 1]);
                        }
                        n--;
                        printf("Student deleted successfully.\n");
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Student not found.\n");
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