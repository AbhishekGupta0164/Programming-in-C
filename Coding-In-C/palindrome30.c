//valid palindrome after removing at most one character
#include<stdio.h>
#include<string.h>
#include<stdbool.h> 

bool isPalindromeRange(char* s, int l, int r) {
    while (l < r) {
        if (s[l] != s[r])
            return false;
        l++;
        r--;
    }
    return true;
}

bool validPalindrome(char* s) {
    int i = 0;
    int j = strlen(s) - 1;

    while (i < j) {
        if (s[i] == s[j]) {
            i++;
            j--;
        } else {
            // skip either left char or right char
            return isPalindromeRange(s, i + 1, j) ||
                   isPalindromeRange(s, i,     j - 1);
        }
    }

    return true;
}

int main() {
    char s[100];
    printf("Enter string: ");
    scanf("%s", s);

    if (validPalindrome(s))
        printf("YES, Valid\n");
    else
        printf("NO, Not Valid\n");

    return 0;
}
