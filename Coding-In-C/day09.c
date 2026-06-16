// check if array is sorted and  rotated
#include<stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1])
            count++;
    }
    // Check last and first element also
    if (arr[n - 1] > arr[0])
        count++;

    if (count == 1)
        printf("Array is sorted and rotated.\n");
    else
        printf("Array is not sorted and rotated.\n");

    return 0;
}
