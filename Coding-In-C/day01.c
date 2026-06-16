#include <stdio.h>
// Program to find the maximum and minimum element in an array
int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];  // Initialize max with first element
    int min = arr[0];  // Initialize min with first element

    // for loop to find max 
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }  // for loop to find min
            else
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Maximum element in array is = %d\n", max);
    printf("Minimum element in array is = %d\n", min);

    return 0;
}
