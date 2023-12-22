#include <stdio.h>

void printDuplicateFrequency(int arr[], int n) {
    int count = 1;  // Initialize count for the first element

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            count++;  // Increment count if the current element is equal to the previous one
        } else {
            if (count > 1) {
                printf("%d->%d,", arr[i - 1], count);
            }
            count = 1;  // Reset count for the new element
        }
    }

    // Check for the last element
    if (count > 1) {
        printf("%d->%d", arr[n - 1], count);
    }

    printf("\n");
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the sorted array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Sample Output:\n");
    printDuplicateFrequency(arr, n);

    return 0;
}