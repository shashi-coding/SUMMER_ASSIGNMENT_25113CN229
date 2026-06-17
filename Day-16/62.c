#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int freq[n];
    
    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; // mark as uncounted
    }

    // Count frequency
    for(i = 0; i < n; i++) {
        int count = 1;
        if(freq[i] == -1) {
            for(j = i + 1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0; // mark duplicate
                }
            }
            freq[i] = count;
        }
    }

    // Find maximum frequency
    int maxFreq = 0;
    int element = arr[0];

    for(i = 0; i < n; i++) {
        if(freq[i] > maxFreq) {
            maxFreq = freq[i];
            element = arr[i];
        }
    }

    printf("Element with maximum frequency = %d\n", element);
    printf("Maximum frequency = %d\n", maxFreq);

    return 0;
}