// trapping rain water
#include<stdio.h>

int main() {
    int n;
    printf("Enter number of bars: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter heights:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int leftMax[n], rightMax[n];    // Find max height on left side for every index
    leftMax[0] = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > leftMax[i-1])
            leftMax[i] = arr[i];
        else
            leftMax[i] = leftMax[i-1];
    }

    // Find max height on right side for every index
    rightMax[n-1] = arr[n-1];
    for(int i = n-2; i >= 0; i--) {
        if(arr[i] > rightMax[i+1])
            rightMax[i] = arr[i];
        else
            rightMax[i] = rightMax[i+1];
    }

    int water = 0;

    // Calculate trapped water
    for(int i = 0; i < n; i++) {
        int minHeight = leftMax[i] < rightMax[i] ? leftMax[i] : rightMax[i];
        water += minHeight - arr[i];
    }

    printf("Total trapped water: %d", water);
    return 0;
}
