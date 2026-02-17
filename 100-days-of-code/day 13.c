#include <stdio.h>

int main() {
    int r, c, i, j;
    int matrix[100][100];

    scanf("%d %d", &r, &c);

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int top = 0, bottom = r - 1;
    int left = 0, right = c - 1;

    while(top <= bottom && left <= right) {

        for(j = left; j <= right; j++) {
            printf("%d ", matrix[top][j]);
        }
        top++;

        for(i = top; i <= bottom; i++) {
            printf("%d ", matrix[i][right]);
        }
        right--;

        if(top <= bottom) {
            for(j = right; j >= left; j--) {
                printf("%d ", matrix[bottom][j]);
            }
            bottom--;
        }

        if(left <= right) {
            for(i = bottom; i >= top; i--) {
                printf("%d ", matrix[i][left]);
            }
            left++;
        }
    }

    return 0;
}
