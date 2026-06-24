#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};
    char maxChar;
    int maxCount = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

   
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }
    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxCount) {
            maxCount = freq[i];
            maxChar = (char)i;
        }
    }

    printf("Maximum occurring character: %c\n", maxChar);
    printf("Frequency: %d\n", maxCount);

    return 0;
}