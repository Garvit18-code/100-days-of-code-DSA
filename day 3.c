#include <stdio.h>

int main() {
    int n, i, key;
    int count = 0;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter key to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        count++;                 
        if(arr[i] == key) {
            printf("Found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("Not Found\n");
    }

    printf("Comparisons = %d\n", count);

    return 0;
}
