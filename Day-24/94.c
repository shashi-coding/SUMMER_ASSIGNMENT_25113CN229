#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    int count = 1;

    for (int i = 0; i < len; i++) {
        while (i < len - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        printf("%c%d", str[i], count);
        count = 1;
    }

    printf("\n");
    return 0;
}