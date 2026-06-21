#include <stdio.h>

int main() {
    char str[100], rev[100];
    int i, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find length
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Reverse the string
    for (i = 0; i < length; i++) {
        rev[i] = str[length - 1 - i];
    }
    rev[i] = '\0';

    printf("Reversed string: %s\n", rev);

    return 0;
}