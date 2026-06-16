
//  kadanes algorithm to find max subarray  sum  
#include<stdio.h>
int main(){
    int n;
    int currsum=0;
    int maxsum ,max;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ",n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        currsum+=arr[i];
        maxsum=(currsum,maxsum);
        if(currsum<0){
            currsum=0;
        }
        
    int max_so_far = arr[0];
    int current_sum = arr[0];

    for(int i = 1; i < n; i++) {
        // Either start new subarray or continue existing one
        if (current_sum + arr[i] < arr[i])
            current_sum = arr[i];
        else
            current_sum += arr[i];

        // Update max if needed
        if (current_sum > max_so_far)
            max_so_far = current_sum;
    }

    printf("Maximum Subarray Sum = %d\n", max_so_far);
    return 0;
}
    
  
}