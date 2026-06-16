#include<stdio.h>
// merge two sorted array

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int n1 = 4, n2 = 4;

    int merged[n1 + n2];
    int i, j;

    // Copy arr1 to merged
    for(i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy arr2 to merged
    for(j = 0; j < n2; j++) {
        merged[i + j] = arr2[j];
    }

    // Simple Bubble Sort
    for(i = 0; i < n1+n2-1; i++) {
        for(j = 0; j < n1+n2-i-1; j++) {
            if(merged[j] > merged[j+1]) {
                int temp = merged[j];
                merged[j] = merged[j+1];
                merged[j+1] = temp;
            }
        }
    }

    printf("Merged Sorted Array: ");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
