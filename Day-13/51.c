#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);
    int a[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int largest = a[0];
    int smallest = a[0];

    for(i = 1; i < n; i++) {
        if(a[i] > largest) {
            largest = a[i];
        }
        if(a[i] < smallest) {
            smallest = a[i];
        }
    }

    printf("%d %d", largest, smallest);

    return 0;
}