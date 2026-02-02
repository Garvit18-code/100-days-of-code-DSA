#include <stdio.h>

int main() {
    int n, pos, x;
    int a[100];   

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter position: ");
    scanf("%d", &pos);

    printf("Enter element to insert: ");
    scanf("%d", &x);

    for (int i = n; i >= pos; i--) {
        a[i] = a[i - 1];
    }

    a[pos - 1] = x;

    printf("Updated array:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
