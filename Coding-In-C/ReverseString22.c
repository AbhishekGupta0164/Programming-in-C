#include<stdio.h>
//  Reverse a string

int main(){

    int n;
    printf("Enter the length of the string: ");
    scanf("%d", &n);
    char str[n+1]; // +1 for null terminator
    printf("Enter the string: ");
    scanf("%s", str);
    // Reverse the string
    for(int i=0; i<n/2; i++){
        char temp = str[i];
        str[i] = str[n-i-1];
        str[n-i-1] = temp;
    }
    printf("Reversed string: %s\n", str);
    return 0;
}