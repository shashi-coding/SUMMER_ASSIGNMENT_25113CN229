#include <stdio.h>

int main() {
    int n, matrix[10][10], sum = 0;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    printf("Sum of principal diagonal elements = %d\n", sum);

    return 0;
}