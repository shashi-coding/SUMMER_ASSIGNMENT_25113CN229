#include <stdio.h>

int main() {
    int n1, n2, i, j;

    scanf("%d", &n1);
    int a[n1];
    for(i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &n2);
    int b[n2];
    for(i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    int visited[n2];
    for(i = 0; i < n2; i++) {
        visited[i] = 0;
    }

    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            if(a[i] == b[j] && visited[j] == 0) {
                printf("%d ", a[i]);
                visited[j] = 1;
                break;
            }
        }
    }

    return 0;
}