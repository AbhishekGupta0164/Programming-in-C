  
  //rearrange array in alternating positive & negative items
  #include<stdio.h>
  #include <stdio.h>

void rearrange(int arr[], int n) {
    int pos[n], neg[n];
    int p = 0, q = 0;

    // Separate positive and negative numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0)
            pos[p++] = arr[i];
        else
            neg[q++] = arr[i];
    }

    int i = 0, j = 0, k = 0;
    int turn = 1; // 1 for positive, 0 for negative

    // Merge alternately
    while (i < p && j < q) {
        if (turn)
            arr[k++] = pos[i++];
        else
            arr[k++] = neg[j++];
        turn = !turn;
    }

    // Add remaining elements
    while (i < p)
        arr[k++] = pos[i++];
    while (j < q)
        arr[k++] = neg[j++];
}

int main() {
    int arr[] = {1, 2, 3, -4, -1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    rearrange(arr, n);

    printf("Rearranged array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

