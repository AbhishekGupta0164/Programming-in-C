// find all pair with a given sum in an  array
#include <stdio.h>

int main()
{
    int n, sum = 6;
   // int arr[n]; 
    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    // Input array elements
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Pairs with sum %d are:\n", sum);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }

    }
        return 0;
    
}