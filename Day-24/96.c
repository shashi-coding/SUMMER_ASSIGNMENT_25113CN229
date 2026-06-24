#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int seen[256] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("String after removing duplicates: ");

    for (int i = 0; str[i] != '\0'; i++) {
        if (!seen[(unsigned char)str[i]]) {
            printf("%c", str[i]);
            seen[(unsigned char)str[i]] = 1;
        }
    }

    return 0;
}