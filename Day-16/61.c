#include <stdio.h>

int main() {
    int n, i, sum = 0, total;

    printf("Enter the number of elements (n-1 elements for range 1 to n): ");
    scanf("%d", &n);

    int arr[n-1];

    printf("Enter the array elements:\n");
    for(i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    total = (n * (n + 1)) / 2;

    printf("Missing number = %d\n", total - sum);

    return 0;
}