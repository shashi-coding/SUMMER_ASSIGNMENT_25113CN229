#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[100];
    int choice, len, i, j, found;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    do {
        printf("\n===== STRING OPERATIONS MENU =====\n");
        printf("1. Find Length\n");
        printf("2. Copy String\n");
        printf("3. Reverse String\n");
        printf("4. Compare Strings\n");
        printf("5. Concatenate Strings\n");
        printf("6. Search Character\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Length of first string = %lu\n", strlen(str1));
                printf("Length of second string = %lu\n", strlen(str2));
                break;

            case 2:
                strcpy(temp, str1);
                printf("Copied string = %s\n", temp);
                break;

            case 3:
                printf("Reversed first string = ");
                for (i = strlen(str1) - 1; i >= 0; i--) {
                    printf("%c", str1[i]);
                }
                printf("\n");
                break;

            case 4:
                if (strcmp(str1, str2) == 0)
                    printf("Strings are equal\n");
                else if (strcmp(str1, str2) > 0)
                    printf("First string is greater\n");
                else
                    printf("Second string is greater\n");
                break;

            case 5:
                strcpy(temp, str1);
                strcat(temp, str2);
                printf("Concatenated string = %s\n", temp);
                break;

            case 6:
                printf("Enter character to search: ");
                char ch;
                scanf(" %c", &ch);

                found = 0;
                for (i = 0; str1[i] != '\0'; i++) {
                    if (str1[i] == ch) {
                        printf("Character found at position %d\n", i + 1);
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf("Character not found\n");
                break;

            case 7:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 7);

    return 0;
}