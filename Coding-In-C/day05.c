#include <stdio.h>

void rearrange(int arr[], int n) {
    int j = 0; // Index to place next negative number
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            // Swap negative element to front
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
}

int main() {
    int arr[] = {1, -3, 5, -2, -8, 7, -4, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    rearrange(arr, n);

    printf("Rearranged array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
