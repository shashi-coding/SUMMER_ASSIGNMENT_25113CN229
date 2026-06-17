#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int a[n];
    int sum = 0;

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    float avg = (float)sum / n;

    printf("%d %.2f", sum, avg);

    return 0;
}