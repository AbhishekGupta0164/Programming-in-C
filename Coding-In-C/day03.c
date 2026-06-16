// Find Kth Max and Min element of an array
#include <stdio.h>
#include <stdlib.h> // Required for qsort

// Comparison function for qsort in ascending order
int compareAsc(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int k, n; // Find the Kth max and Kth min element

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of K (for Kth max/min): ");
    scanf("%d", &k);

    // Check if k is valid
    if (k <= 0 || k > n) {
        printf("Invalid value of K.\n");
        return 1;
    }

    // Sort the array in ascending order
    qsort(arr, n, sizeof(int), compareAsc);

    // Kth minimum element will be at index k-1
    printf("The %dth minimum element is: %d\n", k, arr[k - 1]);

    // Kth maximum element will be at index n-k
    printf("The %dth maximum element is: %d\n", k, arr[n - k]);

    return 0;
}
