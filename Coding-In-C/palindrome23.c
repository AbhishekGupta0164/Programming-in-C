#include<stdio.h>
// check for  palindrome 

int main(){
    int n;
    printf("Enter the length of the string: ");
    scanf("%d", &n);
    char str[n+1]; // +1 for null terminator
    printf("Enter the string: ");
    scanf("%s", str);
    // Check for palindrome
    int isPalindrome = 1; // assume it is a palindrome
    for(int i=0; i<n/2; i++){
        if(str[i] != str[n-i-1]){
            isPalindrome = 0; // not a palindrome
            break;
        }
    }
    if(isPalindrome){
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;   
}