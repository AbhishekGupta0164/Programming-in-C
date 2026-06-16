// find intersection of two sorted arrays

#include <stdio.h>

int main() {
    int arr1[] = {2, 3, 4, 5, 6};
    int arr2[] = {2, 3, 4, 5, 7};

    int n1 = 5, n2 = 6;  // sizes
    int i = 0, j = 0;

    printf("Intersection elements: ");

    while (i < n1 && j < n2) {
        if (arr1[i] == arr2[j]) {
            printf("%d ", arr1[i]);
            i++;
            j++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
    }

    return 0;
}
