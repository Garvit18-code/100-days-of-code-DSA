#include <stdio.h>

int main() {
    int m, n, i, j;
    int matrix[100][100];
    int isSymmetric = 1;

    // Input rows and columns
    scanf("%d %d", &m, &n);

    // Check if square matrix
    if (m != n) {
        printf("Not a Symmetric Matrix\n");
        return 0;
    }

    // Input matrix elements
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check symmetry
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if(isSymmetric == 0)
            break;
    }

    // Output result
    if(isSymmetric)
        printf("Symmetric Matrix\n");
    else
        printf("Not a Symmetric Matrix\n");

    return 0;
}
