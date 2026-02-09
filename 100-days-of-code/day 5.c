#include <stdio.h>

int main() {
    int p, q;
    int log1[100], log2[100];
    int i = 0, j = 0;

    // Input for first server log
    printf("Enter number of entries in server log 1: ");
    scanf("%d", &p);

    printf("Enter %d sorted arrival times for server log 1:\n", p);
    for (i = 0; i < p; i++) {
        scanf("%d", &log1[i]);
    }

    // Input for second server log
    printf("Enter number of entries in server log 2: ");
    scanf("%d", &q);

    printf("Enter %d sorted arrival times for server log 2:\n", q);
    for (j = 0; j < q; j++) {
        scanf("%d", &log2[j]);
    }

    // Reset pointers
    i = 0;
    j = 0;

    // Output
    printf("\nMerged chronological log:\n");

    while (i < p && j < q) {
        if (log1[i] <= log2[j]) {
            printf("%d ", log1[i]);
            i++;
        } else {
            printf("%d ", log2[j]);
            j++;
        }
    }

    // Remaining elements
    while (i < p) {
        printf("%d ", log1[i]);
        i++;
    }

    while (j < q) {
        printf("%d ", log2[j]);
        j++;
    }

    return 0;
}
