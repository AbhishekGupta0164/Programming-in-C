// count number of occurrences of an element 

#include <stdio.h>

int main() {
    int n, i, element, count = 0;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to count
    printf("Enter the element to count: ");
    scanf("%d", &element);

    // Count occurrences
    for(i = 0; i < n; i++) {
        if(arr[i] == element) {
            count++;
        }
    }

    printf("Element %d occurs %d times in the array.\n", element, count);

    return 0;
}

