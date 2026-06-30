#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float m1, m2, m3, total, percentage;
};

int main() {
    struct Student s[100];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].rollNo);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks of 3 subjects:\n");
        scanf("%f %f %f", &s[i].m1, &s[i].m2, &s[i].m3);

        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
        s[i].percentage = (s[i].total / 300) * 100;
    }

    printf("\n========== MARKSHEET ==========\n");
    printf("RollNo\tName\tM1\tM2\tM3\tTotal\tPercentage\n");

    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f%%\n",
               s[i].rollNo,
               s[i].name,
               s[i].m1,
               s[i].m2,
               s[i].m3,
               s[i].total,
               s[i].percentage);
    }

    return 0;
}