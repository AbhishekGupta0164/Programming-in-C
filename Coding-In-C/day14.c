// subarray with given sum 2pointer /sliding window

#include <stdio.h>

int main() {
    int n, sum;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Input target sum
    printf("Enter the target sum: ");
    scanf("%d", &sum);

    int curr_sum = 0, start = 0;
    int found = 0;

    for (int end = 0; end < n; end++) {
        curr_sum += arr[end]; // expand window

        // Shrink window from start while sum > target
        while (curr_sum > sum && start < end) {
            curr_sum -= arr[start];
            start++;
        }

        // Check if current window matches target
        if (curr_sum == sum) {
            printf("Subarray found from index %d to %d\n", start, end);
            found = 1;
            break;  // remove this break if you want all subarrays
        }
    }

    if (!found)
        printf("No subarray with given sum found.\n");

    return 0;
}
