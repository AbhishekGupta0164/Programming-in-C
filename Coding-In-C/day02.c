//Reversing of array
#include <stdio.h>
int main(){
    int n,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    
     int arr[n];
     printf("Enter %d elements:\n",n);
     for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
     }

     // Reversing the array
    for(int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    printf("Reversed array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0 ;
}