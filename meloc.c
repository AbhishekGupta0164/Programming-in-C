#include <stdio.h>
#include <stdlib.h>
int main(){
    int main() {
    int n;
    printf("enter size: ");
    scanf("%d", &n); 

    int *arr = (int *)calloc(n * sizeof(int));

    printf("enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    return 0;
}