#include <stdio.h>
#include <string.h>

#define MAX 100

int roll[MAX];
char name[MAX][50];
float marks[MAX];
int n = 0;

// Function to add student
void addStudent() {
    printf("Enter Roll No: ");
    scanf("%d", &roll[n]);

    printf("Enter Name: ");
    scanf("%s", name[n]);

    printf("Enter Marks: ");
    scanf("%f", &marks[n]);

    n++;
    printf("Student added successfully!\n");
}

// Function to display students
void displayStudents() {
    if (n == 0) {
        printf("No records found!\n");
        return;
    }

    printf("\nRoll\tName\tMarks\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\n", roll[i], name[i], marks[i]);
    }
}

// Function to search student
void searchStudent() {
    int r, found = 0;
    printf("Enter Roll No to search: ");
    scanf("%d", &r);

    for (int i = 0; i < n; i++) {
        if (roll[i] == r) {
            printf("Found: %d %s %.2f\n", roll[i], name[i], marks[i]);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student not found!\n");
}

// Function to update marks
void updateMarks() {
    int r, found = 0;
    printf("Enter Roll No to update: ");
    scanf("%d", &r);

    for (int i = 0; i < n; i++) {
        if (roll[i] == r) {
            printf("Enter new marks: ");
            scanf("%f", &marks[i]);
            printf("Marks updated successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student not found!\n");
}

// Function to delete student
void deleteStudent() {
    int r, found = 0;

    printf("Enter Roll No to delete: ");
    scanf("%d", &r);

    for (int i = 0; i < n; i++) {
        if (roll[i] == r) {
            for (int j = i; j < n - 1; j++) {
                roll[j] = roll[j + 1];
                marks[j] = marks[j + 1];
                strcpy(name[j], name[j + 1]);
            }
            n--;
            printf("Student deleted successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student not found!\n");
}

int main() {
    int choice;

    do {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Marks\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: updateMarks(); break;
            case 5: deleteStudent(); break;
            case 6: printf("Exiting program...\n"); break;
            default: printf("Invalid choice!\n");
        }

    } while (choice != 6);

    return 0;
}