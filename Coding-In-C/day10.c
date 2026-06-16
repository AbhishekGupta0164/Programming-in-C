// leaders in an array
#include <stdio.h>

void findLeaders(int arr[], int n) {
    int max_from_right = arr[n - 1];

    printf("Leaders in the array: ");
    printf("%d ", max_from_right); // Rightmost element is always a leader

    // Traverse from right to left
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= max_from_right) {
            max_from_right = arr[i];
            printf("%d ", arr[i]);
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    findLeaders(arr, n);

    return 0;
}
