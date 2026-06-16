  //  maximum product subarray
  #include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxProduct = arr[0];
    for (int i = 0; i < n; i++) {
        int product = 1;
        for (int j = i; j < n; j++) {
            product = product * arr[j];
            if (product > maxProduct)
                maxProduct = product;
        }
    }

    printf("Maximum product subarray = %d\n", maxProduct);
    return 0;
}
