
//missing number in array upto n

#include <stdio.h>
 
int main() {
    int n, sum = 0, total;
    
    printf("Enter n (the range 1 to n): ");
    scanf("%d", &n);
    
    int arr[n-1];
    printf("Enter %d elements:\n", n-1);
    
    for(int i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    total = n * (n + 1) / 2; // Sum of first n natural numbers,
    int missing = total - sum;
    
    printf("Missing number is: %d\n", missing);
    
    return 0;
}
