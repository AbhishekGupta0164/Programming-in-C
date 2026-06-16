#include<stdio.h>
   
// find union and Intersection between two array 

int isPresent(int arr[], int n, int x) {
    for (int i = 0; i < n; i++)
        if (arr[i] == x)
            return 1;
    return 0;
}

int main() {
    int a[100], b[100], unionArr[200], interArr[100];
    int n1, n2, uCount = 0, iCount = 0;

    // Input for first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements for first array:\n", n1);
    for (int i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    // Input for second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements for second array:\n", n2);
    for (int i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    // --- Find Union ---
    for (int i = 0; i < n1; i++)
        unionArr[uCount++] = a[i];
    for (int i = 0; i < n2; i++)
        if (!isPresent(unionArr, uCount, b[i]))
            unionArr[uCount++] = b[i];

    // --- Find Intersection ---
    for (int i = 0; i < n1; i++)
        if (isPresent(b, n2, a[i]) && !isPresent(interArr, iCount, a[i]))
            interArr[iCount++] = a[i];

    // Display Results
    printf("\nUnion of the two arrays: ");
    for (int i = 0; i < uCount; i++)
        printf("%d ", unionArr[i]);

    printf("\nIntersection of the two arrays: ");
    if (iCount == 0)
        printf("No common elements.");
    else
        for (int i = 0; i < iCount; i++)
            printf("%d ", interArr[i]);

    printf("\n");
    return 0;
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       