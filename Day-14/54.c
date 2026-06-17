#include <stdio.h>

int main() {
    int n, i, key, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element whose frequency is to be found: ");
    scanf("%d", &key);

    
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            count++;
        }
    }

    printf("Frequency of %d = %d\n", key, count);

    return 0;
}