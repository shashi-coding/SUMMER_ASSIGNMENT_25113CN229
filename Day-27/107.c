#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basic, hra, da, gross;
};

int main() {
    struct Employee emp[100];
    int n, i;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Employee Name: ");
        scanf("%s", emp[i].name);

        printf("Basic Salary: ");
        scanf("%f", &emp[i].basic);

        printf("HRA: ");
        scanf("%f", &emp[i].hra);

        printf("DA: ");
        scanf("%f", &emp[i].da);

        emp[i].gross = emp[i].basic + emp[i].hra + emp[i].da;
    }

    printf("\n========== SALARY REPORT ==========\n");
    printf("ID\tName\tBasic\tHRA\tDA\tGross Salary\n");

    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n",
               emp[i].id,
               emp[i].name,
               emp[i].basic,
               emp[i].hra,
               emp[i].da,
               emp[i].gross);
    }

    return 0;
}