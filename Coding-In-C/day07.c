
//  cyclically rotate an array by  one  
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int last = arr[n - 1]; // store last element

    // shift elements to the right
    for (int i = n - 1; i > 0; i--)
        arr[i] = arr[i - 1];

    arr[0] = last; // put last element at first position

    printf("Array after cyclic rotation by one: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
